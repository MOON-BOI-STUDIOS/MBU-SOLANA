using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class InteractableManager : MonoBehaviour
{
    /// <summary>
    /// Handles the Spawn, re-positioning, frequency, of objects that are interactable by the player.
    /// Example of objects: Oil floor, Boost item, Cars
    /// </summary>

    //By default objects with less frequency only require a single instance (already in scene) that constantly gets re-positioned
    //such as Oil floor and boost.

    //in inspector defines all this
    public GameObject oilFloorPrefab;
    public GameObject boostPrefab;
    public List<GameObject> carsPrefab = new List<GameObject>();
    public GameObject[] positionsToMoveTo = new GameObject[3];

    //speed which things appear
    [SerializeField]
    private float _frequency = 0f;
    [SerializeField]
    [Tooltip("Play as you see fit, but obviously 0-1 is just chaos xD")]
    private float[] _frequencyMax = new float[3];

    //random generator int holder
    //  true means I don't want repetition
    private enum types { oil, boost, car };
    private types _previousType;
    private int _previousPosition = 0;
    //we do not want to repeat the same car, 2 reasons: randomness and teleport bug xD
    private int _previousCar = 0;
    //Dictionary to filter types of objects in which should not be repeated.
    //Compare it during reposition function, while _previousType is any of these, try again.
    private Dictionary<int, types> keyValueType = new Dictionary<int, types>() { { 0, types.oil }, { 1, types.oil },
                                                                                { 2, types.boost }, { 3, types.boost } };

    //
    [SerializeField]
    private GameObject prefabBubble;
    private List<GameObject> _dBubbleAvailable = new List<GameObject>();

    private void Start()
    {
        //bubble start off by default so later we can check for availability
        prefabBubble.SetActive(false);
        _frequencyMax = new float[3] { 2f, 1.5f, 1f };
    }

    

    // Update is called once per frame
    void Update()
    {
        if (!RaceGameManager.inst.hasReceiveInput) return;

        _frequency -= Time.deltaTime;

        if(_frequency <= 0)
        {
            CallObjectToWorld();
        }

    }
    private void CallObjectToWorld()
    {
        GameObject temp = null;
        switch (randominator())
        {
            case >= 0 and <= 1:
                temp = oilFloorPrefab;
                repositionOfObject(temp);
                _previousType = types.oil;
                break;

            case >= 2 and <= 3:
                boostPrefab.SetActive(true);
                temp = boostPrefab;
                repositionOfObject(temp);
                _previousType = types.boost;
                break;

            case >= 4 and <= 10:
                int position = Random.Range(0, carsPrefab.Count);
                //Car Check so it doesn't get to repetitive
                while (_previousCar == position) position = Random.Range(0, carsPrefab.Count);
                _previousCar = position;

                repositionOfObject(temp = carsPrefab[position]);
                //position goes from 0 1 2 left center right, as in AICarController Position Enum.
                carsPrefab[position].GetComponent<AICarController>().currentPosition = (AICarController.Position)_previousPosition;
                //Decide future movement
                carsPrefab[position].GetComponent<AICarController>().FutureChangePath();

                _previousType = types.car;
                break;

            default:
                Debug.Log("Out of boundries");
                break;
        }
        //updates frequency based on the currentDifficulty
        if(temp != null)
        {
            //set object bubble
            LookForAvailableBubble(temp);
        }
       
        _frequency = _frequencyMax[(int) RaceGameManager.inst.currentDifficulty];
    }
    //dr. doofenshmirtz approves
    private int randominator(int range = 10)
    {
        /* If no limit is given it means it should return a random value to move objects
         * 0-1 (type 1): Oil floor
         * 2-4 (type 2): Boost
         * 5-10 (type 3): Car -- cars should appear more often then boost and oil floor
        */
        int random;

        do
        {
            random = Random.Range(0, range);
        }
        while (keyValueType.ContainsKey(random) && _previousType == keyValueType[random]);

        return random;
    }

    private void repositionOfObject(GameObject target)
    {
        //in case of error
        if (target == null) return;

        //Check availability before using it.
        if (target.GetComponent<RaceObjectBase>() != null && !target.GetComponent<RaceObjectBase>().available)
        {
            _frequency = 0;
            return;
        }

        target.GetComponent<RaceObjectBase>().available = false;
        //choose one out of 3 positions
        int positionChosen = Random.Range(0, positionsToMoveTo.Length - 1);
        //save positionChosen for later uses such as car position
        _previousPosition = positionChosen;
        //move object to desire location
        target.transform.position = positionsToMoveTo[positionChosen].transform.position;
        //set object speed
        if (target.GetComponent<Rigidbody2D>() != null) target.GetComponent<Rigidbody2D>().velocity = new Vector2(0, RaceGameManager.currentSpeed);

    }

    //New destroyer script
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //object reach end
        if (collision.gameObject.GetComponent<Rigidbody2D>() != null && collision.gameObject.GetComponent<RaceObjectBase>() != null)
        {
            collision.gameObject.GetComponent<Rigidbody2D>().velocity = Vector2.zero;
            collision.gameObject.GetComponent<RaceObjectBase>().OnDeInteract(); 
        }

    }

    private void LookForAvailableBubble(GameObject target)
    {
        //Add bubble to DArray, if there's not a single bubble available, we instantiate a new one and start using it 
        //This help ensure that once the game gets faster we can always have a bubble 
        if (_dBubbleAvailable.Count == 0)
        {
            _dBubbleAvailable.Add(prefabBubble);
        }
        //Create new bubble, use it and finish func.
        for(int i = 0; i < _dBubbleAvailable.Count; i++)
        {
            if (!_dBubbleAvailable[i].activeSelf)
            {
                target.GetComponent<RaceObjectBase>().OnBubble(_dBubbleAvailable[i]);
                return;
            }            
        }
        GameObject temp = Instantiate(prefabBubble, prefabBubble.transform.position, Quaternion.identity, transform);
        _dBubbleAvailable.Add(temp);
        //bubble RaceObjectBase function (sprite definition)
        target.GetComponent<RaceObjectBase>().OnBubble(temp);

    }
}

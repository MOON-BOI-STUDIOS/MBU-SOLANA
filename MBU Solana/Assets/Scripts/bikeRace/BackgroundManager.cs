using DG.Tweening;
using UnityEngine;

public class BackgroundManager : MonoBehaviour
{
    public GameObject[] backgrounds; // Array of your background structs
    public int _bottomIndex = 0;
    public int _mediumIndex = 1;
    public int _topIndex = 2;
    private float _velocityToMove = 0;
    private bool _mustMove = false;
    private Vector2 _bottomTransform, _medTransform ,_topTransform;
    private void Start()
    {
        _bottomTransform = backgrounds[_bottomIndex].gameObject.transform.position;
        _medTransform = backgrounds[_mediumIndex].gameObject.transform.position;
        _topTransform = backgrounds[_topIndex].gameObject.transform.position;
    }
    void FixedUpdate()
    {
        if (RaceGameManager.inst.bikeController.isKilled) return;

        //transform.position = new Vector2(transform.position.x, transform.position.y + VelocityToMove());
        GetComponent<Rigidbody2D>().velocity = Vector2.up * RaceGameManager.currentSpeed;
        if (backgrounds[_mediumIndex].gameObject.transform.position.y <= _bottomTransform.y)
            MoveBackgrounds();
        //Move all background as a whole, once mid background reaches below background position, shifts all background to -1
        /*

        // Calculate the midpoint of the current medium background
        float midPoint = (backgrounds[mediumIndex].gameObject.position.y + backgrounds[mediumIndex].endPoint.position.y) / 2;

        // If the player has crossed the midpoint of the medium background, shift the backgrounds up
        if (bikeController.transform.position.y > midPoint)
        {
            // Move the bottom background to the top
            backgrounds[bottomIndex].gameObject.position = new Vector3(backgrounds[bottomIndex].gameObject.position.x, backgrounds[topIndex].endPoint.position.y, backgrounds[bottomIndex].gameObject.position.z);

            // Update the indices
            int oldBottomIndex = bottomIndex;
            bottomIndex = mediumIndex;
            mediumIndex = topIndex;
            topIndex = oldBottomIndex;
        }
        */
    }
    private void MoveBackgrounds()
    {
        //could just shift bottomindex position to topindex position however because of float and < bottomtransfrom.Y 
        //it always increase a bit the distance between backgrounds creating a "void"
        backgrounds[_bottomIndex].gameObject.transform.position = _topTransform;
        backgrounds[_mediumIndex].gameObject.transform.position = _bottomTransform;
        backgrounds[_topIndex].gameObject.transform.position = _medTransform;
        int tempOldBottom = _bottomIndex;
        _bottomIndex = _mediumIndex;
        _mediumIndex = _topIndex;
        _topIndex = tempOldBottom;
    }
    private float VelocityToMove()
    {
        _velocityToMove = (RaceGameManager.inst.bikeController.isOnBoost) ? 10f * Time.fixedDeltaTime * RaceGameManager.inst.bikeController.verticalSpeedBoostMultiplier 
                                                                                    : 10f * Time.fixedDeltaTime;
        return -_velocityToMove;
    }
}

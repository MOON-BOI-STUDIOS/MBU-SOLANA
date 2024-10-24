using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonkeDaoRadarItemQuest : MonoBehaviour
{
    [SerializeField] Animator fountainAnimator;
    [SerializeField] List<Items> itemList = new List<Items>();
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GiveRadarItem()
    {
        ItemInventory.instance.AddItem(Instantiate(itemList[16]));
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Events;

public class RodShopitem : MonoBehaviour
{
    [SerializeField] Color itemNotSelectedColor;
    [SerializeField] Color itemSelectedColor;

    [Space(20f)]
    [SerializeField] Image RodImage;
    [SerializeField] TextMeshProUGUI Rodname;
    [SerializeField] TextMeshProUGUI RodLuck;
    [SerializeField] TextMeshProUGUI RodRarity;
    [SerializeField] TextMeshProUGUI RodPrice;
    [SerializeField] Button RodPurchaseButton;

    //[Space(20f)]
    //[SerializeField] Button itemButton;
    //[SerializeField] Image itemImage;
    //[SerializeField] Outline itemOutline;

   
    public RodItemObj rdb = null;

    public BaitItemObjj _bait = null;

    public bool isbait = false;

    public int quantity;

    public ShopCurrencyTemp currencyTemp;


    public void Start()
    {
        setCharacterImage();
        setCharacterName();
        setRodLuck();
        setRodPrice();
        setrodRarity();
        quantity = 0;
            
    }

    private void Update()
    {
        setCharacterImage();
        setCharacterName();
        setRodLuck();
        setRodPrice();
        setrodRarity();

        /*if(isbait)
        {
            if (quantity == 7|| currencyTemp.TempCurrency < _bait.ItemValue) 
            {
                RodPurchaseButton.interactable = false;
            }
            else if(quantity < 7|| currencyTemp.TempCurrency < _bait.ItemValue)
            {
                RodPurchaseButton.interactable = true;
            }
        }
        else
        {
            if (quantity == 7 || currencyTemp.TempCurrency < rdb.ItemValue) 
            {
                RodPurchaseButton.interactable = false;
            }
            else if(quantity < 7 || currencyTemp.TempCurrency > rdb.ItemValue)
            {
                RodPurchaseButton.interactable = true;
            }
        }*/
    }

    public void setCharacterImage()
    {
        RodImage.sprite = isbait? _bait.icon:rdb.icon;
    }

    public void setCharacterName()
    {
        Rodname.text = isbait? _bait.name: rdb.name;
    }

    public void adQuant()
    {
        quantity++;
    }

    public void setRodLuck()
    {
        string num = isbait? _bait.luck.ToString():rdb.luck.ToString();
        RodLuck.text ="Luck" + num +"%";
    }

    public void setrodRarity()
    {
        if(!isbait)
        {
            RodRarity.text = "Rarity" + rdb.Minrarity.ToString() + "-" + rdb.Maxrarity.ToString();
        }
        else{
            RodRarity.text = "Rarity" + _bait.luck.ToString() + "%";
        }
      
    }

    public void setRodPrice()
    {
        RodPrice.text = isbait ? _bait.ItemValue.ToString():rdb.ItemValue.ToString() + "Coins";
    }

    public void LooseCurrncy()
    {
        if(!isbait)
        {
            // Call to reduce gold coin of the player
            //TempCurrency -= itemObject.GetItemValue();
            Debug.Log("Value of the item is:" + rdb.GetItemValue());
            // Write code to Add item to the inventory here
            AddInventoryItemScript.instance.AddToInventory(rdb);
        }
        else
        {
            Debug.Log("Value of the item is:" + _bait.GetItemValue());
            // Write code to Add item to the inventory here
            AddInventoryItemScript.instance.AddToInventory(_bait);      
        }
    }
    //public void setrodasPurchased()
    //{
    //    RodPurchaseButton.gameObject.SetActive(false);
    //    // change item colour
    //    itemButton.interactable = true;

    //    itemImage.color = itemNotSelectedColor;
    //}

    //public void OnItemPurchase(int itemIndex, UnityAction<int> action)
    //{
    //    RodPurchaseButton.onClick.RemoveAllListeners();
    //    RodPurchaseButton.onClick.AddListener(() => action.Invoke(itemIndex));
    //}

    //public void OnItemSelect(int itemIndex,UnityAction<int> action)
    //{
    //    itemButton.interactable = true;
    //    RodPurchaseButton.onClick.RemoveAllListeners();
    //    RodPurchaseButton.onClick.AddListener(() => action.Invoke(itemIndex));
    //}

    //public void selectItem()
    //{
    //    itemOutline.enabled = true;
    //    itemImage.color = itemSelectedColor;
    //    itemButton.interactable = false;
    //}




}
    


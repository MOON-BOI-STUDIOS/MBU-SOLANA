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

   
    public RodItemObj rdb;

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

        if (quantity == 7 || currencyTemp.TempCurrency < rdb.ItemValue) 
        {
            RodPurchaseButton.interactable = false;
        }
        else if(quantity < 7 || currencyTemp.TempCurrency > rdb.ItemValue)
        {
            RodPurchaseButton.interactable = true;
        }
    }

    public void setCharacterImage()
    {
        RodImage.sprite = rdb.icon;
    }

    public void setCharacterName()
    {
        Rodname.text = rdb.name;
    }

    public void adQuant()
    {
        quantity++;
    }

    public void setRodLuck()
    {
        RodLuck.text ="Luck" + rdb.luck.ToString() +"%";
    }

    public void setrodRarity()
    {
        RodRarity.text = "Rarity" + rdb.Minrarity.ToString() + "-" + rdb.Maxrarity.ToString();
      
    }

    public void setRodPrice()
    {
        RodPrice.text = rdb.ItemValue.ToString() + "Coins";
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
    


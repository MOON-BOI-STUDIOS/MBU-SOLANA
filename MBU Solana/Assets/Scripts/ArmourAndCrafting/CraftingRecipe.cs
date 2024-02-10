using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Item", menuName = "CraftingRecipe/baseRecipe")]
public class CraftingRecipe : Items
{
    public Items result;
    public Ingredients[] _IngredientsArray;
    public float craftingTime = 1f;

    private CraftingSlot parentCraftingSlot;

    public void SetParentSlot(CraftingSlot slot)
    {
        parentCraftingSlot = slot;
    }

    private bool CanCraft()
    {
        foreach(Ingredients ingredient in _IngredientsArray)
        {
            bool containsCurrentIngredient = ItemInventory.instance.ContainsItems(ingredient._Items.name, ingredient.amount);

            if (!containsCurrentIngredient)
            {
                return false;
            }
        }

        return true;
    }

    private void RemoveIngredientsFromInventory()
    {
        foreach (Ingredients ingredient in _IngredientsArray)
        {
            ItemInventory.instance.RemoveItems(ingredient._Items.name, ingredient.amount);
        }
    }

    public bool CraftItem()
    {
        if (!CanCraft()) return false;
        RemoveIngredientsFromInventory();
        //Start crafting
        parentCraftingSlot.StartCrafting();
        return true;
    }

    public override void Use()
    {
        ItemInventory.instance.AddCraftingItem(this);
    }

    public override string GetItemDescription()
    {
        string itemIngredients = "";

        foreach (Ingredients ingredient in _IngredientsArray)
        {
            itemIngredients += "- " + ingredient.amount + " " + ingredient._Items.name + "\n";
        }

        return itemIngredients;
    }
}

[System.Serializable] 
public class Ingredients
{
    public Items _Items;
    public int amount;
}

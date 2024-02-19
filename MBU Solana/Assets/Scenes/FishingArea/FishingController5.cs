using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
public class FishingController5 : MonoBehaviour
{
    [System.Serializable]
    public class FishData
    {
        public string name;
        public int points;
    }

    [System.Serializable]
    public class RodData
    {
        public string name;
        public float chance;
    }

    [System.Serializable]
    public class BaitData
    {
        public string name;
        public float luck;
    }

    // Fishing rods
    public enum FishingRodType
    {
        Basic,
        TunaFork,
        Stewart,
        Bonk,
        Kingfisher
    }

    // Bait types
    public enum BaitType
    {
        PlasticWorm,
        RadiatedWorm,
        CommonWorm,
        BonkBait,
        QueenSwisher
    }

    // Fish types
    public enum FishType
    {
        Lumpsucker,
        Tuna,
        Wonderpus,
        Bonk,
        RoyalGramma,
        Dragon
    }

    [Header("Fish Data")]
    public FishData[] fishData;

    [Header("Fishing Rod Data")]
    public RodData[] rodData;

    [Header("Bait Data")]
    public BaitData[] baitData;

    public TextMeshProUGUI Rodtxt;
    public TextMeshProUGUI Baittxt;

    // Current state
    private FishingRodType currentRod;
    private BaitType currentBait;

    public StatItems[] fishItems;
    public Image[] fishSprite;
    public GameObject image;
    public Image Fish_Image;
    public FishType Type;

    private void Start()
    {
        // Initial setup
        currentRod = FishingRodType.Basic;
        currentBait = BaitType.PlasticWorm;
    }

    private void Update()
    {
        // Check for user input
        if (Input.GetKeyDown(KeyCode.Space))
        {
            CatchFish();
        }
        else if (Input.GetKeyDown(KeyCode.R))
        {
            SwitchRod();
            //CatchFish(); // Catch fish when switching rod
        }
        else if (Input.GetKeyDown(KeyCode.B))
        {
            SwitchBait();
            //CatchFish(); // Catch fish when switching bait
        }

        Rodtxt.text = "Rod = " + currentRod.ToString();
        Baittxt.text = "Bait = " + currentBait.ToString();
    }

    public void CatchFish()
    {
        float randomChance = Random.value;

        // Calculate chance of catching a fish with the current rod and bait
        float rodChance = GetRodChance(currentRod);
        float baitLuck = GetBaitLuck(currentBait);
        float totalChance = rodChance + baitLuck;

        if (randomChance <= totalChance)
        {
            // Add fish item here to add to the inventory
            StatItems fishCaught = fishItems[Random.Range(0,fishItems.Length)];
            AddInventoryItemScript.instance.AddToInventory(fishCaught);
            // Fish caught
            //FishType caughtFish = (FishType)Random.Range(0, fishData.Length);
            int points = fishCaught.points;
            string fishName = fishCaught.name;
            //string rodName = rodData[(int)currentRod].name;
            //string baitName = baitData[(int)currentBait].name;

            // Display catch information on the screen
            DisplayText($"Dre has caught a {fishName} of value {fishCaught.GetItemValue()}, scoring: {points}");
            image.SetActive(true);
            switch (Type)
            {
                case FishType.Wonderpus:
                    Fish_Image = fishSprite[0];

                    break;
                case FishType.Tuna:
                    Fish_Image = fishSprite[2];
                    break;
                case FishType.RoyalGramma:
                    Fish_Image = fishSprite[3];
                    break;
                case FishType.Lumpsucker:
                    Fish_Image = fishSprite[4];
                    break;
                case FishType.Dragon:
                    Fish_Image = fishSprite[5];
                    break;
                case FishType.Bonk:
                    Fish_Image = fishSprite[6];
                    break;
            }


        }
        else
        {
            // No fish caught
            DisplayText("No fish caught this time.");
            image.SetActive(false);

        }

     


    }


    public void SwitchRod()
    {
        // Switch to the next fishing rod
        currentRod = (FishingRodType)(((int)currentRod + 1) % rodData.Length);

        // Display rod switch information on the screen
        DisplayText($"Switched to {currentRod.ToString()} fishing rod.");
    }

    public void SwitchBait()
    {
        // Switch to the next bait
        currentBait = (BaitType)(((int)currentBait + 1) % baitData.Length);

        // Display bait switch information on the screen
        DisplayText($"Equipped {currentBait.ToString()} bait.");
    }

    private void DisplayText(string message)
    {
        // Replace this with your own implementation to display text on the screen
        Debug.Log(message);
    }

    private float GetRodChance(FishingRodType rodType)
    {
        return rodData[(int)rodType].chance;
    }

    private float GetBaitLuck(BaitType baitType)
    {
        return baitData[(int)baitType].luck;
    }
}













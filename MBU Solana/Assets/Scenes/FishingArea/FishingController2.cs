using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class FishingController2 : MonoBehaviour
{
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

    // Fish data
    private readonly string[] fishNames = { "Lumpsucker", "Tuna", "Wonderpus", "Bonk", "Royal Gramma", "Dragon" };
    private readonly int[] fishPoints = { 1, 2, 3, 6, 8, 88 };

    // Fishing rod data
    private readonly float[] rodChances = { 0.1f, 0.2f, 0.3f, 0.4f, 0.5f };

    // Bait data
    private readonly float[] baitLuckValues = { 0.1f, 0.2f, 0.3f, 0.69f, 0.5f };

    // Current state
    private FishingRodType currentRod;
    private BaitType currentBait;

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
        }
        else if (Input.GetKeyDown(KeyCode.B))
        {
            SwitchBait();
        }
    }

    private void CatchFish()
    {
        float randomChance = Random.value;

        // Calculate chance of catching a fish with the current rod and bait
        float totalChance = rodChances[(int)currentRod] + baitLuckValues[(int)currentBait];
        if (randomChance <= totalChance)
        {
            // Fish caught
            FishType caughtFish = (FishType)Random.Range(0, fishNames.Length);
            int points = fishPoints[(int)caughtFish];
            string fishName = fishNames[(int)caughtFish];

            // Display catch information on the screen
            DisplayText($"Dre has caught a {fishName}! +{points} points");
        }
        else
        {
            // No fish caught
            DisplayText("No fish caught this time.");
        }
    }

    private void SwitchRod()
    {
        // Switch to the next fishing rod
        currentRod = (FishingRodType)(((int)currentRod + 1) % rodChances.Length);

        // Display rod switch information on the screen
        DisplayText($"Switched to {currentRod.ToString()} fishing rod.");
    }

    private void SwitchBait()
    {
        // Switch to the next bait
        currentBait = (BaitType)(((int)currentBait + 1) % baitLuckValues.Length);

        // Display bait switch information on the screen
        DisplayText($"Equipped {currentBait.ToString()} bait.");
    }

    private void DisplayText(string message)
    {
        // Replace this with your own implementation to display text on the screen
        Debug.Log(message);
    }
}








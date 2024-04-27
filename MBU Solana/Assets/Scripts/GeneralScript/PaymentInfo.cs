
// Using Static class for setting the amount in the Arcade manager in Bonk Arcade Scene
// Using Static class for setting the amount in the Game Manager in ShopInterior Scene
// Using Static class for setting the amount in the Game Manager in Bonk battle arena Scene
using Solana.Unity.Rpc.Models;

public static class PaymentInfo
{
    public static string publicKey = "B2Vh4JS8Q5eQawJZUq7JbmNdnyDRvBmDsFHas7havGxu";
    public static double requiredAmount;
    public static string queriedEvent; // This variable stores which event to run if transaction is successful
    public static bool UIActive = false;
    public static TokenAccount account = null;
}

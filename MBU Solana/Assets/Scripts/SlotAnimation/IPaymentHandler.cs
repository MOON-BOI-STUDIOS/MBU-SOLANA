using UnityEngine;
public interface IPaymentHandler
{
    void TryAndProcessTransaction(ulong amount, string amountText, string transactionText);
}

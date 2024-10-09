using UnityEngine;

public class MonkeDaoFountain : MonoBehaviour
{

    [SerializeField] GameObject monkeDaoCoinButton;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            monkeDaoCoinButton.SetActive(true);
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            monkeDaoCoinButton.SetActive(false);
        }
    }
}

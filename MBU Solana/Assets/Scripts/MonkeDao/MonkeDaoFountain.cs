using UnityEngine;

public class MonkeDaoFountain : MonoBehaviour
{
    [SerializeField] GameObject monkeDaoGuidePanel;

    [SerializeField] GameObject monkeDaoCoinButton;

    void Start()
    {
        if (PlayerPrefs.GetInt("MonkeTutorial") == 0)
        {
            monkeDaoGuidePanel.SetActive(true);
        }
    }

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

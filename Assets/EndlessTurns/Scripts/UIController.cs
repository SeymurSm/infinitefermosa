using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class UIController : MonoBehaviour
{


    public static UIController Instance;
    public Text score;
    public Text bestScore;
    public Text gold;
    public Image muteButton;
    public Image unMuteButton;
    public Image replayButton;
    public PlayerController playerController;
    public GameObject rateMenu;
    private int playCount;
    private bool alreadyDisplayedRate = false;
    // Use this for initialization
    void Start()
    {
        Instance = this;
        playCount = PlayerPrefs.GetInt("play_count");

        ScoreManager.Instance.Reset();
        muteButton.enabled = false;
        unMuteButton.enabled = false;
        replayButton.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        score.text = ScoreManager.Instance.Score.ToString();
        bestScore.text = ScoreManager.Instance.HighScore.ToString();
        gold.text = CoinManager.Instance.Coins.ToString();

        if (playerController.gameOver && !alreadyDisplayedRate)
        {
            alreadyDisplayedRate = true;
            Invoke("RateDialog", 1.5f);

        }

        if (Application.platform == RuntimePlatform.Android)
        {

            // Check if Back was pressed this frame
            if (Input.GetKeyDown(KeyCode.Escape))
            {

                // Quit the application
                OnBackPressed();
            }
        }
    }


    void OnBackPressed()
    {
        if (!alreadyDisplayedRate)
        {
            alreadyDisplayedRate = true;
           //Invoke("RateDialog", 1.5f);
            rateMenu.SetActive(true);
        }
        else
        {
            AdsManager.Instance.ShowIntertitialAd();
            Application.Quit();
        }
    }


    public void SoundClick()
    {
        if (SoundManager.Instance.IsMuted())
        {
            unMuteButton.enabled = true;
            muteButton.enabled = false;
            SoundManager.Instance.ToggleMute();
        }
        else
        {
            unMuteButton.enabled = false;
            muteButton.enabled = true;
            SoundManager.Instance.ToggleMute();
        }
        SoundManager.Instance.PlaySound(SoundManager.Instance.hitButton);
    }

    public void ReplayButton()
    {
        PlayerPrefs.SetInt("play_count", playCount + 1);
        SoundManager.Instance.PlaySound(SoundManager.Instance.hitButton);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);

    }

    public void Rate(bool rate)
    {
        rateMenu.SetActive(false);
        if (rate)
        {
            if (Application.platform == RuntimePlatform.IPhonePlayer)
                Application.OpenURL("https://apps.apple.com/app/fermosa-unlock-hidden-castle/id1566938055");
            else if (Application.platform == RuntimePlatform.Android)
                Application.OpenURL("https://play.google.com/store/apps/details?id=com.alvadigames.infinite_fermosa");


            
        }

        EnableButton();
    }


    public void NotNow(){
         EnableButton();
    }

    public void RateDialog()
        {
            if (playCount > 0 && playCount % 3 == 0)
            {
                rateMenu.SetActive(true);
            }
            else
                EnableButton();
        }

        void EnableButton()
        {
            rateMenu.SetActive(false);
            replayButton.enabled = true;
            if (SoundManager.Instance.IsMuted())
            {
                muteButton.enabled = true;
                unMuteButton.enabled = false;
            }
            else
            {
                muteButton.enabled = false;
                unMuteButton.enabled = true;
            }
        }
    }

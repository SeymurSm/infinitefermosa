using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class UIController : MonoBehaviour {


    public static UIController Instance;
    public Text score;
    public Text bestScore;
    public Text gold;
    public Image muteButton;
    public Image unMuteButton;
    public Image replayButton;
    public PlayerController playerController;
    public GameObject rateMenu;
    private int playCount ;
	// Use this for initialization
	void Start () {
        Instance = this;
        playCount = PlayerPrefs.GetInt("play_count");
        if(playCount>0 && playCount%3 ==0)
            rateMenu.SetActive(true);
        ScoreManager.Instance.Reset();
        muteButton.enabled = false;
        unMuteButton.enabled = false;
        replayButton.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
        score.text = ScoreManager.Instance.Score.ToString();
        bestScore.text = ScoreManager.Instance.HighScore.ToString();
        gold.text = CoinManager.Instance.Coins.ToString();

        if (playerController.gameOver)
        {
            Invoke("EnableButton", 1.5f);
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
        PlayerPrefs.SetInt("play_count", playCount+1);
        SoundManager.Instance.PlaySound(SoundManager.Instance.hitButton);
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void Rate(bool rate){
        rateMenu.SetActive(false);
        if(rate)
            Application.OpenURL("http://unity3d.com/");
    }

    void EnableButton()
    {
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

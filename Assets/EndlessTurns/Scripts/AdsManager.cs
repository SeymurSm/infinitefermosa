using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class AdsManager : MonoBehaviour, IUnityAdsListener
{
   public static AdsManager Instance;
    bool testMode = true;
    bool interWatch = false;
    string mySurfacingId = "rewardedVideo";
    string interSurfacingId = "interstitialAdLose";
    private string bannerSurfacingId = "bannerPlacement";

    
    //#if UNITY_IOS
    private string gameId;// = "4142986";
    //#elif UNITY_ANDROID
    //private string gameId = "4142987";
    //#endif
    // Start is called before the first frame update
    void Start()
    {
       
        if (Application.platform == RuntimePlatform.Android)
            gameId = "4155221";
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
            gameId = "4155220";
        Instance = this;
        Advertisement.AddListener (this);
        Advertisement.Initialize (gameId, testMode);
         StartCoroutine(ShowBannerWhenInitialized());
    }

     IEnumerator ShowBannerWhenInitialized () {
        while (!Advertisement.isInitialized) {
            yield return new WaitForSeconds(0.5f);
        }
        Advertisement.Banner.SetPosition (BannerPosition.BOTTOM_CENTER);
        Advertisement.Banner.Show (bannerSurfacingId);
    }

    public void ShowIntertitialAd(){
        if(Advertisement.IsReady(interSurfacingId)){
            Advertisement.Show(interSurfacingId);
            interWatch = true;
        }
        else
            Debug.Log("Interstitial ad has not been loaded");
    }

    public void ShowRewardedVideo() {
        // Check if UnityAds ready before calling Show method:
        if (Advertisement.IsReady(mySurfacingId)) {
            Advertisement.Show(mySurfacingId);
        } 
        else {
            Debug.Log("Rewarded video is not ready at the moment! Please try again later!");
        }
    }

    // Implement IUnityAdsListener interface methods:
    public void OnUnityAdsDidFinish (string surfacingId, ShowResult showResult) {
        // Define conditional logic for each ad completion status:
        if (showResult == ShowResult.Finished) {
            // Reward the user for watching the ad to completion.
        //    if(surfacingId == mySurfacingId )
        //        UIManagement.Instance.AddCoins();
        } else if (showResult == ShowResult.Skipped) {
            // Do not reward the user for skipping the ad.
        } else if (showResult == ShowResult.Failed) {
            Debug.LogWarning ("The ad did not finish due to an error.");
        }

        interWatch = false;
    }

    public void OnUnityAdsReady (string surfacingId) {
        // If the ready Ad Unit or legacy Placement is rewarded, show the ad:
       // Application.Quit(); 
        if (surfacingId == mySurfacingId) {
            Debug.Log("Ads ready " + mySurfacingId);
           // UIManagement.Instance.EnableRewardAdMode();
            // Optional actions to take when theAd Unit or legacy Placement becomes ready (for example, enable the rewarded ads button)
        }
    }

    public void OnUnityAdsDidError (string message) {
        // Log the error.
         Debug.Log("Ads error " + mySurfacingId);
    }

    public void OnUnityAdsDidStart (string surfacingId) {
        // Optional actions to take when the end-users triggers an ad.
         Debug.Log("Ads started " + mySurfacingId);
    } 

    // When the object that subscribes to ad events is destroyed, remove the listener:
    public void OnDestroy() {
        Advertisement.RemoveListener(this);
    }
}
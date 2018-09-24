using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;

public class AdMob : MonoBehaviour {
	private BannerView bannerView;
	private InterstitialAd interstitial;

	// Use this for initialization
    public void Start()
    {
		this.InitAdmob();

		this.PrepareInterstital();

		if (SceneManager.GetActiveScene().name == "Home" ||
			SceneManager.GetActiveScene().name == "HiScore") {
			this.RequestBanner();
		}
    }
	
	// Update is called once per frame
	void Update () {
	}

	public void InitAdmob() {
		#if UNITY_ANDROID
            string appId = "ca-app-pub-3940256099942544~3347511713"; // TEST
			// string appId = "ca-app-pub-2228911308495304~9711757466"; // LIVE
        #elif UNITY_IPHONE
            string appId = "ca-app-pub-3940256099942544~1458002511";
        #else
            string appId = "unexpected_platform";
        #endif

        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(appId);
	}

    public void RequestBanner()
    {
        #if UNITY_ANDROID
            string adUnitId = "ca-app-pub-3940256099942544/6300978111"; // TEST
			// string adUnitId = "ca-app-pub-2228911308495304/2188490667"; // LIVE
        #elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-3940256099942544/2934735716";
        #else
            string adUnitId = "unexpected_platform";
        #endif

        // Create a 320x50 banner at the top of the screen.
        bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
    }

	public void PrepareInterstital() {
		#if UNITY_ANDROID
			string adUnitId = "ca-app-pub-3940256099942544/1033173712"; // TEST
			// string adUnitId = "ca-app-pub-2228911308495304/1226106249"; // LIVE
		#elif UNITY_IPHONE
			string adUnitId = "ca-app-pub-3940256099942544/4411468910";
		#else
			string adUnitId = "unexpected_platform";
		#endif		
		// Initialize an InterstitialAd.
		interstitial = new InterstitialAd(adUnitId);
		// Create an empty ad request.
		AdRequest request = new AdRequest.Builder().Build();
		// Load the interstitial with the request.
		interstitial.LoadAd(request);		
	}

	public void ShowInterstitial() {
		if (interstitial.IsLoaded()) {
			interstitial.Show();
		}	
	}
}

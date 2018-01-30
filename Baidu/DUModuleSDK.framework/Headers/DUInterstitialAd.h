//
//  DUInterstitialAd.h
//  DUModuleSDK
//
//  Created by jinwenhai on 17/6/28.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DUAdDefines.h"
#import "DUAdConstants.h"

@protocol DUInterstitialAdDelegate;

/**
 A modal view controller to represent a du interstitial ad. This
 is a full-screen ad shown in your application.
 */
DU_CLASS_EXPORT DU_SUBCLASSING_RESTRICTED
@interface DUInterstitialAd : NSObject

/**
 Typed access to the id of the ad placement.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *placementID;
/**
 the delegate
 */
@property (nonatomic, weak, nullable) id<DUInterstitialAdDelegate> delegate;

- (nullable instancetype)init NS_UNAVAILABLE;
/**
 This is a method to initialize an DUInterstitialAd matching the given placement id.
 
 - Parameter placementID: The id of the ad placement. You can create your placement id from Mobula developers page.
 */
- (nonnull instancetype)initWithPlacementID:(nonnull NSString *)placementID;

/*!
 @method
 
 @abstract
 This is a method to initialize a DUNativeAd object matching the given placement id.
 
 @param placementID The id of the ad placement. You can create your placement id from Mobula developers page.
 
 @param aSize The number of the cache. You can create your placement id from Mobula developers page.
 */
- (nonnull instancetype)initWithPlacementID:(nonnull NSString*)placementID cacheSize:(NSInteger)aSize NS_DESIGNATED_INITIALIZER;

/**
 Returns true if the interstitial ad has been successfully loaded.
 
 You should check `isAdValid` before trying to show the ad.
 */
//@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

/**
 Begins loading the DUInterstitialAd content.
 
 You can implement `interstitialAdDidLoad:` and `interstitialAd:didFailWithError:` methods
 of `DUInterstitialAdDelegate` if you would like to be notified as loading succeeds or fails.
 */
- (void)loadAd;

/*!
 Use the fillAd to pre-cache ads in advance, for faster loading the ads when using loadAd
 */
- (void)fillAd;

/*!
 Check if there is cached ad
 */
- (BOOL)isHasCached;

/*!
 This interface is for getting the cached ad for the current ad object. 
 It could be traversed until the number of cached ads goes to 0. 
 Please make sure the cache pool is not null before showing ad.
 */
- (nullable DUInterstitialAd*)getCacheAd;

/**
 Presents the interstitial ad modally from the specified view controller.
 
 - Parameter rootViewController: The view controller that will be used to present the interstitial ad.
 
 
 You can implement `interstitialAdDidClick:`, `interstitialAdWillClose:` and `interstitialAdWillClose`
 methods of `DUInterstitialAdDelegate` if you would like to stay informed for thoses events
 */
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;

@end

/**
 The methods declared by the DUInterstitialAdDelegate protocol allow the adopting delegate to respond
 to messages from the DUInterstitialAd class and thus respond to operations such as whether the
 interstitial ad has been loaded, user has clicked or closed the interstitial.
 */
@protocol DUInterstitialAdDelegate <NSObject>

@optional

/**
 Sent immediately before the impression of an DUInterstitialAd object will be logged.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 */
- (void)interstitialAdWillLogImpression:(nonnull DUInterstitialAd *)interstitialAd;

/**
 Sent after an ad in the DUInterstitialAd object is clicked. The appropriate app store view or
 app browser will be launched.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 */
- (void)interstitialAdDidClick:(nonnull DUInterstitialAd *)interstitialAd;

/**
 Sent after an DUInterstitialAd object has been dismissed from the screen, returning control
 to your application.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 */
- (void)interstitialAdDidClose:(nonnull DUInterstitialAd *)interstitialAd;

/**
 Sent immediately before an DUInterstitialAd object will be dismissed from the screen.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 */
- (void)interstitialAdWillClose:(nonnull DUInterstitialAd *)interstitialAd;

/**
 Sent when an DUInterstitialAd successfully loads an ad.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 */
- (void)interstitialAdDidLoad:(nonnull DUInterstitialAd *)interstitialAd;

/**
 Sent when an DUInterstitialAd failes to load an ad.
 
 - Parameter interstitialAd: An DUInterstitialAd object sending the message.
 - Parameter error: An error object containing details of the error.
 */
- (void)interstitialAd:(nonnull DUInterstitialAd *)interstitialAd didFailWithError:(nonnull NSError *)error;

@end


//
//  AdxmiInterstitialDelegate.h
//  AdxmiYM
//
//  Created by Work on 2017/3/6.
//  Copyright © 2017year Work. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdxmiError.h"

@class AdxmiInterstitialAd;


@protocol AdxmiInterstitialDelegate <NSObject>
@optional

/**
 * Notifies the delegate that the interstitial has finished loading and can be shown instantly.
 */
- (void)onLoadSuccess:(nonnull AdxmiInterstitialAd *)interstitialAd;

/**
 * Notifies the delegate that the interstitial has failed to load with some error.
 */
- (void)onLoadFail:(nonnull AdxmiInterstitialAd *)interstitialAd error:(nonnull AdxmiError *)error;

/**
 * Sent after an interstitial ad object has been presented on the screen.
 *
 * @param interstitialAd The interstitial ad object sending the message.
 */
- (void)onShowSuccess:(nonnull AdxmiInterstitialAd *)interstitialAd;

/**
 * Sent after an interstitial ad object has been clicked.
 *
 * @param interstitialAd The interstitial ad object sending the message.
 */
- (void)onClick:(nonnull AdxmiInterstitialAd *)interstitialAd;

/**
 * Sent after an interstitial ad object has been closed.
 *
 * @param interstitialAd The interstitial ad object sending the message.
 */
- (void)onClose:(nonnull AdxmiInterstitialAd *)interstitialAd;
@end

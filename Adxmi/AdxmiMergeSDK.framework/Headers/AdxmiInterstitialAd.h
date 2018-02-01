//
//  AdxmiInterstitialAd.h
//  AdxmiInterstitialAd
//
//  Created by anLun on 2017/6/21.
//  Copyright © 2017年 anLun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdxmiInterstitialDelegate.h"
#import <UIKit/UIKit.h>
#import "AdxmiBaseSDK.h"
#import <Foundation/Foundation.h>
#import "AdxmiError.h"

/**
 Interstitial
 */
@interface AdxmiInterstitialAd: NSObject

/**
 The delegate to receive callbacks
 */
@property (nonatomic, weak, nullable) id<AdxmiInterstitialDelegate> delegate;

/**
 * Initialize an Interstitial with the given slotId
 * @param slotId The placementId for loading the interstitial
 */
-(nonnull instancetype)initSlotId:(nullable NSString *)slotId;

/**
 Loads an Interstitial
 */
- (void)load;

/**
 * Displays the interstitial on the screen
 * @param rootViewController  this view controller will be used to present interestitial.
 */
- (void)show:(nonnull UIViewController *)rootViewController;

/**
 Release resources
 */
- (void)destroy;
@end


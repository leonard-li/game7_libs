//
//  AdxmiYMVideoAd.h
//  AdxmiYM
//
//  Created by anLun on 2017/5/2.
//  Copyright © 2017年 Work. All rights reserved.
//

#import "AdxmiError.h"
#import "AdxmiBaseSDK.h"
#import <UIKit/UIKit.h>
#import "AdxmiVideoReward.h"
#import "AdxmiVideoDelegate.h"
#import "AdxmiVideoDelegate.h"
#import <Foundation/Foundation.h>

@interface AdxmiVideoAd : NSObject

/**
 The delegate to receive callbacks
 */
@property (nonatomic, weak, nullable) id<AdxmiVideoDelegate> delegate;

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

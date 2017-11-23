//
//  IASDKCore.h
//  IASDKCore
//
//  Created by Inneractive on 29/01/2017.
//  Copyright © 2017 Inneractive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "IALogger.h"

#import "IAInterfaceAllocBlocker.h"
#import "IAInterfaceBuilder.h"
#import "IAInterfaceSingleton.h"

#import "IAInterfaceUnitController.h"
#import "IAInterfaceNativeRenderer.h"

#import "IAAdSpot.h"
#import "IAAdRequest.h"
#import "IAUserData.h"
#import "IADebugger.h"
#import "IAAdModel.h"

#import "IAUnitController.h"
#import "IAUnitDelegate.h"
#import "IAViewUnitController.h"
#import "IAFullscreenUnitController.h"
#import "IANativeUnitController.h"
#import "IAContentController.h"
#import "IAAdView.h"

#import "IAMediation.h"
#import "IAMediationMopub.h"
#import "IAMediationAdMob.h"
#import "IAMediationDFP.h"
#import "IAMediationFyber.h"

@interface IASDKCore : NSObject <IAInterfaceSingleton>

@property (nonatomic, strong, nullable, readonly) NSString *appID;

/**
 *  @brief Singleton method, use for any instance call.
 */
+ (instancetype _Null_unspecified)sharedInstance;

/**
 *  @brief Required IA SDK method. Invoke it first priority.
 */
- (void)initWithAppID:(NSString * _Nonnull)appID;

/**
 *  @brief Get IASDKCore framework current version as NSString instance.
 *
 *  @discussion The format is 'X.XX'.
 */
- (NSString * _Null_unspecified)version;

@end

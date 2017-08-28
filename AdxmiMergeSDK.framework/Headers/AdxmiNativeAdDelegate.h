//
//  AdxmiYMNativeAdDelegate.h
//  AdxmiYM
//
//  Created by linxiaolong on 2017/5/10.
//  Copyright © 2017年 Work. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdxmiError.h"

@class AdxmiNativeAd;


@protocol AdxmiNativeAdDelegate <NSObject>
@optional

/**
 * Notifies the delegate that the native has finished loading and can be shown instantly.
 */
- (void)adxmiYMNativeAdOnLoadSuccess:(nonnull AdxmiNativeAd *)adxmiSdkNative;

/**
 * Notifies the delegate that the native has failed to load with some error.
 */
- (void)adxmiYMNativeAdOnLoadError:(nonnull AdxmiNativeAd *)adxmiSdkNative error:(nonnull AdxmiError *)error;

/**
 * Sent after an native ad object has been presented on the screen.
 *
 * @param native The native ad object sending the message.
 */
- (void)adxmiYMNativeAdOnImpress:(nonnull AdxmiNativeAd *)adxmiSdkNative;

/**
 * Sent after an native ad object has been clicked.
 *
 * @param native The native ad object sending the message.
 */
- (void)adxmiYMNativeAdOnClick:(nonnull AdxmiNativeAd *)adxmiSdkNative;

@end

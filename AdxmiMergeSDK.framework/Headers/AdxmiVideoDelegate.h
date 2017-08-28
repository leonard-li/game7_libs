//
//  AdxmiVideoDelegate.h
//  AdxmiYM
//
//  Created by anLun on 2017/5/2.
//  Copyright © 2017年 Work. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AdxmiError;
@class AdxmiVideoAd;
@class AdxmiVideoAdReward;

@protocol AdxmiVideoDelegate <NSObject>
@optional

/**
 加载成功

 @param videoAd 当前视频广告示例
 */
- (void)onVideoLoaded:(nonnull AdxmiVideoAd *)videoAd;
/**
 显示成功
 
 @param videoAd 当前视频广告示例
 */
- (void)onVideoShow:(nonnull AdxmiVideoAd *)videoAd;
/**
 视频广告开始
 
 @param videoAd 当前视频广告示例
 */
- (void)onVideoStarted:(nonnull AdxmiVideoAd *)videoAd;
/**
 视频广告关闭
 
 @param videoAd 当前视频广告示例
 */
- (void)onVideoClosed:(nonnull AdxmiVideoAd *)videoAd;

/**
 加载失败

 @param videoAd 当前视频广告示例
 @param error 错误信息
 */
- (void)onVideoLoadFailed:(nonnull AdxmiVideoAd *)videoAd error:(nonnull AdxmiError *)error;

/**
 奖励回调

 @param videoAd 当前视频广告示例
 @param videoAdReward 回调对象
 */
- (void)onVideoRewarded:(nonnull AdxmiVideoAd *)videoAd reward:(nonnull AdxmiVideoAdReward *)videoAdReward;
/**
 视频广告点击
 
 @param videoAd 当前视频广告示例
 */
- (void)onVideoClick:(nonnull AdxmiVideoAd *)videoAd;
@end

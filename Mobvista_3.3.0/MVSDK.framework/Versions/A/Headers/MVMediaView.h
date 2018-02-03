//
//  MVMediaView.h
//  MVSDK
//
//  Created by 陈俊杰 on 2017/5/25.
//  Copyright © 2017年 Mobvista. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MVCampaign.h"
NS_ASSUME_NONNULL_BEGIN

@protocol MVMediaViewDelegate;
@class MVNativeAdManager;

@interface MVMediaView : UIView

- (instancetype)initWithFrame:(CGRect)frame;
/**
the media source, can be set again to reuse this view.
*/
- (void)setMediaSourceWithCampaign:(MVCampaign *)campaign unitId:(NSString*)unitId;

@property (nonatomic, weak, nullable) id<MVMediaViewDelegate> delegate;

// Whether to allow full-screen playback, default YES
@property (nonatomic, assign) BOOL  allowFullscreen;

// Whether update to video from static image when video is ready to be played, default YES
@property (nonatomic, assign) BOOL  videoRefresh;

// Auto replay, default YES
@property (nonatomic, assign) BOOL  autoLoopPlay;

@property (nonatomic, strong, readonly) MVCampaign *campaign;

@property (nonatomic, readonly) NSString *unitId;

/**
 After called 'setMediaSourceWithCampaign:(MVCampaign *)campaign unitId:(NSString*)unitId',
 you can check this MediaView whether has video content via isVideoContent if needed;
 */
@property (nonatomic,readonly,getter = isVideoContent) BOOL videoContent;

@end

@protocol MVMediaViewDelegate <NSObject>

@optional

/*!
 @method
 
 @abstract
 Sent just before an MVMediaView will enter the fullscreen layout.
 
 @param nativeAd: An mediaView object sending the message.
 */
- (void)MVMediaViewWillEnterFullscreen:(MVMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after an FBMediaView has exited the fullscreen layout.
 
 @param nativeAd: An mediaView object sending the message.
 */
- (void)MVMediaViewDidExitFullscreen:(MVMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after an ad has been clicked by a user.
 
 @param nativeAd An MVCampaign object sending the message.
 */
- (void)nativeAdDidClick:(nonnull MVCampaign *)nativeAd;
- (void)nativeAdDidClick:(nonnull MVCampaign *)nativeAd mediaView:(MVMediaView *)mediaView;


/*!
 @method
 
 @abstract
 Sent after an ad url did start to resolve.
 
 @param clickUrl The click url of the ad.
 */
- (void)nativeAdClickUrlWillStartToJump:(nonnull NSURL *)clickUrl;
- (void)nativeAdClickUrlWillStartToJump:(nonnull NSURL *)clickUrl mediaView:(MVMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after an ad url has jumped to a new url.
 
 @param jumpUrl The url during jumping.
 
 @discussion It will not be called if a ad's final jump url has been cached
 */
- (void)nativeAdClickUrlDidJumpToUrl:(nonnull NSURL *)jumpUrl;
- (void)nativeAdClickUrlDidJumpToUrl:(nonnull NSURL *)jumpUrl  mediaView:(MVMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after an ad url did reach the final jump url.
 
 @param finalUrl the final jump url of the click url.
 @param error the error generated between jumping.
 */
- (void)nativeAdClickUrlDidEndJump:(nullable NSURL *)finalUrl
                             error:(nullable NSError *)error;
- (void)nativeAdClickUrlDidEndJump:(nullable NSURL *)finalUrl
                             error:(nullable NSError *)error  mediaView:(MVMediaView *)mediaView;

- (void)nativeAdImpressionWithType:(MVAdSourceType)type mediaView:(MVMediaView *)mediaView;
@end

NS_ASSUME_NONNULL_END

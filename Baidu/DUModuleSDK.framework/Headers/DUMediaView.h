//
//  DUMediaView.h
//  DUModuleSDK
//
//  Created by baidu on 17/1/16.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DUAdDefines.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DUMediaViewDelegate;
@class DUNativeAd;

/*!
 @class FBNativeAd
 
 @abstract
 The DUMediaView loads media content from a given FBNativeAd. This view takes the place of manually loading a cover image.
 */
DU_CLASS_EXPORT
@interface DUMediaView : UIView

/*!
 @property
 @abstract the delegate
 */
@property (nonatomic, weak, nullable) id<DUMediaViewDelegate> delegate;

/*!
 @method
 @abstract
 This is a method to create a media view using the given native ad.
 @param nativeAd The native ad to load media content from.
 */
- (instancetype)initWithNativeAd:(DUNativeAd *)nativeAd;

/*!
 @property
 @abstract the native ad, can be set again to reuse this view.
 */
@property (nonatomic, strong, nonnull) DUNativeAd *nativeAd;

/*!
 @property
 @abstract The current volume of the media view, ranging from 0.0 through 1.0.
 */
@property (nonatomic, assign, readonly) float volume;

/*!
 @property
 @abstract Enables or disables autoplay for some types of media. Defaults to YES.
 */
@property (nonatomic, assign, getter=isAutoplayEnabled) BOOL autoplayEnabled;

@end

/*!
 @protocol
 
 @abstract
 The methods declared by the DUMediaViewDelegate protocol allow the adopting delegate to respond to messages from the DUMediaView class and thus respond to operations such as whether the media content has been loaded.
 */
@protocol DUMediaViewDelegate <NSObject>

@optional

/*!
 @method
 
 @abstract
 Sent when an DUMediaView has been successfully loaded.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewDidLoad:(DUMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent just before an DUMediaView will enter the fullscreen layout.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewWillEnterFullscreen:(DUMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after an DUMediaView has exited the fullscreen layout.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewDidExitFullscreen:(DUMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent when an DUMediaView has changed the playback volume of a video ad.
 
 @param mediaView An DUMediaView object sending the message.
 @param volume The current ad video volume (after the volume change).
 */
- (void)mediaView:(DUMediaView *)mediaView videoVolumeDidChange:(float)volume;

/*!
 @method
 
 @abstract
 Sent after a video ad in an DUMediaView enters a paused state.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewVideoDidPause:(DUMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent after a video ad in an DUMediaView enters a playing state.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewVideoDidPlay:(DUMediaView *)mediaView;

/*!
 @method
 
 @abstract
 Sent when a video ad in an DUMediaView reaches the end of playback.
 
 @param mediaView An DUMediaView object sending the message.
 */
- (void)mediaViewVideoDidComplete:(DUMediaView *)mediaView;

@end

NS_ASSUME_NONNULL_END

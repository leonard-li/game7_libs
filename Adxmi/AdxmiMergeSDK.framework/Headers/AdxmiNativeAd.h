//
//  AdxmiNativeAd.h
//  AdxmiYM
//
//  Created by anLun on 2017/5/22.
//  Copyright © 2017年 anLun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdxmiNativeAdDelegate.h"
#import <UIKit/UIKit.h>
#import "AdxmiBaseSDK.h"
#import "AdxmiError.h"

@class AdxmiNativeAdImage;
@class AdxmiNativeView;

@interface AdxmiNativeAd : NSObject

/**
 Typed access to the ad title.
 */
@property (nonatomic, copy, readonly, nullable) NSString *title;

/**
 Typed access to the ad subtitle.
 */
@property (nonatomic, copy, readonly, nullable) NSString *subtitle;

/**
 Typed access to the call to action phrase of the ad, for example "Install Now".
 */
@property (nonatomic, copy, readonly, nullable) NSString *callToAction;

/**
 Typed access to the ad icon. See `FBAdImage` for details.
 */
@property (nonatomic, strong, readonly, nullable) AdxmiNativeAdImage *icon;

/**
 Typed access to the ad cover image creative. See `FBAdImage` for details.
 */
@property (nonatomic, strong, readonly, nullable) AdxmiNativeAdImage *coverImage;


/**
 如果返回这个参数的话，必须使用这个，才可以触发相应的点击事件
 */
@property (nonatomic , strong , nullable) AdxmiNativeView *nativeView;
#pragma mark ----------以下为操作----------
#pragma mark -


/**
 The delegate to receive callbacks
 */
@property (nonatomic, weak, nullable) id<AdxmiNativeAdDelegate> delegate;

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
 Release resources
 */
- (void)destroy;


/**
 注册触发view

 @param view 触发view
 @param viewController 操作控制器
 */
- (void)registerViewForInteraction:(nullable UIView *)view
                withViewController:(nullable UIViewController *)viewController;


/**
 点击事件
 */
- (void)clickEvent;
@end


#pragma mark AdxmiNativeView
#pragma mark -
@interface AdxmiNativeView : UIView
/// Weak reference to your ad view's headline asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *headlineView;
/// Weak reference to your ad view's call to action asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *callToActionView;
/// Weak reference to your ad view's icon asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *iconView;
/// Weak reference to your ad view's body asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *bodyView;
/// Weak reference to your ad view's store asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *storeView;
/// Weak reference to your ad view's price asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *priceView;
/// Weak reference to your ad view's image asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *imageView;
/// Weak reference to your ad view's star rating asset view.
@property(nonatomic, weak, nullable) IBOutlet UIView *starRatingView;
@end

#pragma mark AdxmiNativeAdImage
#pragma mark -
/**
 Represents an image creative.
 */
@interface AdxmiNativeAdImage : NSObject

/**
 Typed access to the image url.
 */
@property (nonatomic, copy, readonly, nonnull) NSURL *url;
/**
 Typed access to the image width.
 */
@property (nonatomic, assign, readonly) NSInteger width;
/**
 Typed access to the image height.
 */
@property (nonatomic, assign, readonly) NSInteger height;

/**
 This is a method to initialize an FBAdImage.
 
 - Parameter url: the image url.
 - Parameter width: the image width.
 - Parameter height: the image height.
 */
- (nonnull instancetype)initWithURL:(nonnull NSURL *)url
                      width:(NSInteger)width
                     height:(NSInteger)height NS_DESIGNATED_INITIALIZER;

/**
 Loads an image from self.url over the network, or returns the cached image immediately.
 
 - Parameter block: Block to handle the loaded image.
 */
- (void)loadImageAsyncWithBlock:(nullable void (^)(UIImage * __nullable image))block;

@end

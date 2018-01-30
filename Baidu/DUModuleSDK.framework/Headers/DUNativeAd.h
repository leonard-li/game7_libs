//
//  DUNativeAd.h
//  DUModuleSDK
//
//  Created by baidu on 16/12/28.
//  Copyright © 2016年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DUAdDefines.h"
#import "DUAdConstants.h"

@protocol DUNativeAdDelegate;
@class DUAdImage;

/*!
 @class DUNativeAd
 
 @abstract 
 Ad request.
 */
DU_CLASS_EXPORT DU_SUBCLASSING_RESTRICTED
@interface DUNativeAd : NSObject

/*!
 @property
 @abstract Typed access to the id of the ad placement.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *placementID;
/*!
 @property
 @abstract Typed access to the ad title.
 */
@property (nonatomic, copy, readonly, nullable) NSString *title;
/*!
 @property
 @abstract Typed access to the ad subtitle.
 */
@property (nonatomic, copy, readonly, nullable) NSString *shortDesc;
/*!
 @property
 @abstract Typed access to the call to action phrase of the ad, for example "Install Now".
 */
@property (nonatomic, copy, readonly, nullable) NSString *callToAction;
/*!
 @property
 @abstract Typed access to the ad icon.
 */
@property (nonatomic, strong, readonly, nullable) NSString *iconUrl;
/*!
 @property
 @abstract Typed access to the ad cover image creative.
 */
@property (nonatomic, strong, readonly, nullable) NSString *imgeUrl;
/*!
 @property
 @abstract Typed access to the native ad type, for example DUNativeAdTypeFacebook.
 */
@property (nonatomic, assign, readonly) DUAdChannelType adChannelType;
/*!
 @property
 @abstract the delegate
 */
@property (nonatomic, weak, nullable) id<DUNativeAdDelegate> delegate;

/*!
 @method
 
 @abstract
 This is a method to initialize a DUNativeAd object matching the given placement id.
 
 @param placementID The id of the ad placement. You can create your placement id from Mobula developers page.
 */
- (nonnull instancetype)initWithPlacementID:(nonnull NSString*)placementID;

/*!
 @method
 
 @abstract
 This is a method to initialize a DUNativeAd object matching the given placement id.
 
 @param placementID The id of the ad placement. You can create your placement id from Mobula developers page.
 
 @param aSize The number of the cache. You can create your placement id from Mobula developers page.
 */
- (nonnull instancetype)initWithPlacementID:(nonnull NSString*)placementID cacheSize:(NSInteger)aSize NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)init NS_UNAVAILABLE;

/*!
 @method
 
 @abstract
 This is a method to associate a DUNativeAd with the UIView you will use to display the native ads.
 
 @param view The UIView you created to render all the native ads data elements.
 @param viewController The UIViewController that will be used to present SKStoreProductViewController
 (iTunes Store product information) or the in-app browser. If nil is passed, the top view controller currently shown will be used.
 
 @discussion The whole area of the UIView will be clickable.
 */
- (void)registerViewForInteraction:(nonnull UIView *)view
                withViewController:(nullable UIViewController *)viewController;

/*!
 @method
 
 @abstract
 This is a method to associate DUNativeAd with the UIView you will use to display the native ads
 and set clickable areas.
 
 @param view The UIView you created to render all the native ads data elements.
 @param viewController The UIViewController that will be used to present SKStoreProductViewController
 (iTunes Store product information). If nil is passed, the top view controller currently shown will be used.
 @param clickableViews An array of UIView you created to render the native ads data element, e.g.
 CallToAction button, Icon image, which you want to specify as clickable.
 */
- (void)registerViewForInteraction:(nonnull UIView *)view
                withViewController:(nullable UIViewController *)viewController
                withClickableViews:(nullable NSArray<UIView *> *)clickableViews;

/**
 This is a method to disconnect a DUNativeAd with the UIView you used to display the native ads.
 */
- (void)unregisterView;

/*!
 @method
 
 @abstract
 Begins loading the DUNativeAd content.
 
 @discussion You can implement `nativeAdDidLoad:` and `nativeAd:didFailWithError:` methods
 of `DUNativeAdDelegate` if you would like to be notified as loading succeeds or fails.
 */
- (void)loadAd;

/*!
 @method
 
 @abstract
 Begins loading the DUNativeAd content.
 
 @discussion .
 */
- (void)fillAd;

/*!
 @method
 
 @abstract .
 
 @discussion .
 */
- (BOOL)isHasCached;

/*!
 @method
 
 @abstract .
 
 @discussion .
 */
- (nullable DUNativeAd*)getCacheAd;

@end

/*!
 @protocol
 
 @abstract
 The methods declared by the DUNativeAdDelegate protocol allow the adopting delegate to respond to messages
 from the DUNativeAd class and thus respond to operations such as whether the native ad has been loaded.
 */
@protocol DUNativeAdDelegate <NSObject>

@optional

/*!
 @method
 
 @abstract
 Sent when an DUNativeAd has been successfully loaded.
 
 @param nativeAd An DUNativeAd object sending the message.
 */
- (void)nativeAdDidLoad:(nonnull DUNativeAd *)nativeAd;

/*!
 @method
 
 @abstract
 Sent immediately before the impression of an DUNativeAd object will be logged.
 
 @param nativeAd An DUNativeAd object sending the message.
 */
- (void)nativeAdWillLogImpression:(nonnull DUNativeAd *)nativeAd;

/*!
 @method
 
 @abstract
 Sent when an DUNativeAd is failed to load.
 
 @param nativeAd An DUNativeAd object sending the message.
 @param error An error object containing details of the error.
 */
- (void)nativeAd:(nonnull DUNativeAd *)nativeAd didFailWithError:(nonnull NSError *)error;

/*!
 @method
 
 @abstract
 Sent after an ad has been clicked by the person.
 
 @param nativeAd An DUNativeAd object sending the message.
 */
- (void)nativeAdDidClick:(nonnull DUNativeAd *)nativeAd;

/*!
 @method
 
 @abstract
 When an ad is clicked, the modal view will be presented. And when the user finishes the
 interaction with the modal view and dismiss it, this message will be sent, returning control
 to the application.
 
 @param nativeAd An DUNativeAd object sending the message.
 */
- (void)nativeAdDidFinishHandlingClick:(nonnull DUNativeAd *)nativeAd;

@end

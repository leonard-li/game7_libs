//
//  DUAdChoicesView.h
//  DUModuleSDK
//
//  Created by baidu on 17/2/8.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DUAdDefines.h"

NS_ASSUME_NONNULL_BEGIN
@class DUNativeAd;

/*!
 @class DUAdChoicesView
 
 @abstract
 DUAdChoicesView offers a simple way to display a sponsored or AdChoices icon.
 */
DU_CLASS_EXPORT DU_SUBCLASSING_RESTRICTED
@interface DUAdChoicesView : UIView

/*!
 @property
 @abstract Determines whether the view can be expanded upon being tapped, or defaults to fullsize. Defaults to NO.
 */
@property (nonatomic, assign, readonly, getter=isExpandable) BOOL expandable;

/*
 @property
 @abstract The native ad that provides AdChoices info, such as the image url, and click url. Setting this updates the nativeAd.
 */
@property (nonatomic, weak, readwrite, nullable) DUNativeAd *nativeAd;

/*
 @property
 @abstract Affects background mask rendering. Setting this property updates the rendering.
 */
@property (nonatomic, assign, readwrite) UIRectCorner corner;

/*
 @property
 @abstract The view controller to present the ad choices info from. If nil, the top view controller is used.
 */
@property (nonatomic, weak, readwrite, nullable) UIViewController *viewController;

/*!
 @method
 
 @abstract
 Initialize this view with a given native ad. Configuration is pulled from the native ad.
 
 @param nativeAd The native ad to initialize with.
 @param expandable Controls whether view defaults to expanded or not, see property documentation
 */
- (instancetype)initWithNativeAd:(DUNativeAd *)nativeAd
                      expandable:(BOOL)expandable;

/*!
 @method
 
 @abstract
 Using the superview, this updates the frame of this view, positioning the icon in the top right corner by default.
 */
- (void)updateFrameFromSuperview;

/*!
 @method
 
 @abstract
 Using the superview, this updates the frame of this view, positioning the icon in the corner specified. UIRectCornerAllCorners not supported.
 
 @param corner The corner to display this view from.
 */
- (void)updateFrameFromSuperview:(UIRectCorner)corner;

@end

NS_ASSUME_NONNULL_END


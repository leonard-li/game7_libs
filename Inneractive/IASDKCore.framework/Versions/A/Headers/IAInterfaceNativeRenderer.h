//
//  IAInterfaceNativeRenderer.h
//  IASDKCore
//
//  Created by Inneractive on 14/03/2017.
//  Copyright © 2017 Inneractive. All rights reserved.
//

#ifndef IAInterfaceNativeRenderer_h
#define IAInterfaceNativeRenderer_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol IAInterfaceNativeRenderer <NSCoding, UIAppearance, UIAppearanceContainer, UIDynamicItem, UITraitEnvironment, UICoordinateSpace, UIFocusItem, CALayerDelegate>

@required

/**
 *  @brief UIView for adding Video or Large Image. Inneractive custom UI object.
 */
- (UIView * _Nonnull)IAMainAssetSuperview;

@optional

/**
 *  @discussion Althought is optional, but is required in order to rendering appropriate asset.
 */
- (UILabel * _Nullable)IATitleAsset;
- (UIImageView * _Nullable)IAIconAsset;
- (UILabel * _Nullable)IADescriptionAsset;
- (UILabel * _Nullable)IACallToActionAsset;

- (void)IAWillLayoutAssets;
- (void)IADidLayoutAssets;

@end

#endif /* IAInterfaceNativeRenderer_h */

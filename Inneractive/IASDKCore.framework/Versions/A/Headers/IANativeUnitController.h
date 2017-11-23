//
//  IANativeUnitController.h
//  IASDKCore
//
//  Created by Inneractive on 14/03/2017.
//  Copyright © 2017 Inneractive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "IAInterfaceBuilder.h"
#import "IAUnitController.h"
#import "IAUnitDelegate.h"

@protocol IAInterfaceNativeRenderer;

@protocol IANativeUnitControllerDelegate <IAUnitDelegate>

@required
// There are defined methods in base protocol 'IAUnitDelegate';

@end

@protocol IANativeUnitControllerBuilder <IAUnitControllerBuilderProtocol>

@required
@property (nonatomic, weak, nullable) id<IANativeUnitControllerDelegate> unitDelegate;

@end

@interface IANativeUnitController : IAUnitController <IAInterfaceBuilder, IANativeUnitControllerBuilder>

+ (instancetype _Nullable)build:(void(^ _Nonnull)(id<IANativeUnitControllerBuilder> _Nonnull builder))buildBlock;

- (void)showAdInNativeRenderer:(UIView<IAInterfaceNativeRenderer> * _Nonnull)view;

@end

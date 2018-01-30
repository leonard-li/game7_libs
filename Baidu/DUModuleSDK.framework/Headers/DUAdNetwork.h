//
//  DUAdNetwork.h
//  DUModuleSDK
//
//  Created by baidu on 17/1/5.
//  Copyright © 2017年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DUAdDefines.h"
#import "DUAdConstants.h"

DU_CLASS_EXPORT DU_SUBCLASSING_RESTRICTED
@interface DUAdNetwork : NSObject

/*!
 @method
 
 @abstract
 In your AppDelegate.m file, call the following two interfaces to finish the initialization.
 
 @param aDic The relationship between DAP Placement ID and Facebook Placement ID.
 @param aStr It is your APP ID on DAP, a unique identifier of your APP on Du Ad Platform.
 */
+(void)initWithConfigDic:(NSDictionary*)aDic
             withLicense:(NSString*)aStr;


@end


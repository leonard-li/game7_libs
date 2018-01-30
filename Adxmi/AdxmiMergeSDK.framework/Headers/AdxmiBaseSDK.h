//
//  AdxmiBaseSDK.h
//  AdxmiUtil
//
//  Created by anLun on 2017/6/21.
//  Copyright © 2017年 anLun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdxmiDefine.h"
@interface AdxmiBaseSDK : NSObject
+ (void)registerAppid:(nonnull NSString *)appid
            appsecret:(nullable NSString *)appsecret;
+(nonnull NSString *)version;
+(void)setLogLevel:(AdxmiSDKLogLevel)desiredLogLevel;
@end

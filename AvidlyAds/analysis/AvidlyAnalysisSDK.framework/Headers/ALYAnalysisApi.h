//
//  ALYAnalysisApi.h
//  AvidlyAnalysis
//
//  Created by samliu on 2017/6/30.
//  Copyright © 2017年 samliu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALYNetGlobalZoneDefine.h"
#import "ALYEventData.h"
#import "ALYUserIdListener.h"

@interface ALYAnalysisApi : NSObject
    
+ (void)initSDKWithProductId:(NSString *)productId ChannelId:(NSString *)channelId AppID:(NSString *)appId;

+ (void)initSDKWithProductId:(NSString *)productId ChannelId:(NSString *)channelId AppID:(NSString *)appId zone:(AvidlyAnalsisGlobalZone)zone;

/**
 获取SDK版本
 
 @return 版本号
 */
+ (NSString *)versionOfAnlysis;

/**
 获取统计包token
 
 @return 统计包token
 */
+ (NSString *)userIdOfAnalysis;

+ (void)eventTraceWithData:(ALYEventData *)data;

// 正常的级别，即最高级别
+ (void)eventTrace:(NSString*)key value:(id)data;

+ (void)eventTraceByLowPrority:(NSString*)key value:(id)data;

+ (void)eventTraceByMidPrority:(NSString*)key value:(id)data;

#pragma mark UserIdGetListener (内部震江使用)

+ (void)addUserIdGetListener:(id<ALYUserIdListener>)listener;

+ (void)removeUserIdGetListener:(id<ALYUserIdListener>)listener;

@end

//
//  AvidlyAdsTrace.h
//  AvidlyAdsSDK
//
//  Created by samliu on 2017/9/26.
//  Copyright © 2017年 liuguojun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AvidlyAdsTrace : NSObject

/**
 *
 * @param key 事件id，不能为空
 * @param map 统计的业务参数，可以为空
 */
+ (void)traceLog:(NSString*)key withData:(NSDictionary*)map;

@end

//
//  ALYAnalysisDebug.h
//  AvidlyAnalysis
//
//  Created by steve on 2017/7/14.
//  Copyright © 2017年 samliu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ALYAnalysisDebugLevel) {
    ALYAnalysisDebugLevelNone = 0,      //控制台不输出log
    ALYAnalysisDebugLevelLog = 1,       //控制台输出打印log
};


@interface ALYAnalysisDebug : NSObject

+ (void)setDebugLevel:(ALYAnalysisDebugLevel)level;

@end

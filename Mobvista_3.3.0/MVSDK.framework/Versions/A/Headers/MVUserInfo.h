//
//  MVUserInfo.h
//  MVSDK
//
//  Created by 陈俊杰 on 2017/11/23.
//  Copyright © 2017年 Mobvista. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MVGender) {
    MVGender_Unknown,
    MVGender_Man = 1,
    MVGender_Woman = 2,
};

typedef NS_ENUM(NSUInteger, MVUserPayType) {
    MVUserPayType_Unknown = 2,
    MVUserPayType_Pay = 1,
    MVUserPayType_Unpaid = 0,
};

@interface MVUserInfo : NSObject

@property (nonatomic,assign) MVGender gender;

@property (nonatomic,assign) NSInteger age;

@property (nonatomic,assign) MVUserPayType pay;

@property (nonatomic, copy) NSString *custom;

@property (nonatomic, copy) NSString *longitude;

@property (nonatomic, copy) NSString *latitude;

@end

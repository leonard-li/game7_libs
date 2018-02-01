//
//  AdxmiError.h
//  AdxmiYM
//
//  Created by Work on 2017/3/6.
//  Copyright © 2017年 Work. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSInteger const kNoAdaptersCode;// no adapters load success
extern NSString *const kNoAdaptersMsg;// no adapters load success

extern NSInteger const kUnreachableCode;//
extern NSString *const kUnreachableMsg;//

extern NSInteger const kNoResponseCode;//
extern NSString *const kNoResponseMsg;//

extern NSInteger const kNoSdkCode;//
extern NSString *const kNoSdkMsg;//

extern NSInteger const kResponseErrCode;//
extern NSString *const kResponseErrMsg;//

extern NSInteger const kAdTypeErrCode;//
extern NSString *const kAdTypeErrMsg;//

extern NSInteger const kAdLoadFailCode;//
extern NSString *const kAdLoadFailMsg;//

extern NSInteger const kAdReLoadFailCode;//
extern NSString *const kAdReLoadFailMsg;//

extern NSInteger const kNoActivityCode;//
extern NSString *const kNoActivityMsg;//

extern NSInteger const kAdTempleErrCode;//
extern NSString *const kAdTempleErrMsg;//

extern NSInteger const kWebTimeroutCode;//
extern NSString *const kWebTimeroutMsg;//

extern NSInteger const kDisplayErrCode;//
extern NSString *const kDisplayErrMsg;//

extern NSInteger const kAdNullCode;//
extern NSString *const kAdNullMsg;//

//domain 值
extern NSString *const kInterstitialDomain; //插屏
extern NSString *const kVideoDomain; //视频
extern NSString *const kNativeDomain; //推荐墙

@interface AdxmiError : NSObject
@property (nonatomic , assign) NSInteger mCode;
@property (nonatomic , copy) NSString *mDomain;
@property (nonatomic , strong) NSDictionary *mInfo;

- (instancetype)initMCode:(NSInteger)mCode mDomain:(NSString *)mDomain mInfo:(NSDictionary *)mInfo;

@end

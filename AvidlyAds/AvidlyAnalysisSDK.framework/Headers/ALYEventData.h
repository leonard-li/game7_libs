//
//  ALYEventData.h
//  AvidlyAnalysis
//
//  Created by samliu on 2017/6/30.
//  Copyright © 2017年 samliu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EventLevel) {
    EventLevel_Hight_Prority = 3,
    EventLevel_Middle_Prority = 2,
    EventLevel_Low_Prority = 1,
};

@interface ALYEventData : NSObject

+ (instancetype)initEventDataWithKey:(NSString*)key;

@property (nonatomic) NSInteger dataid;  //记录id
@property (nonatomic) NSInteger level;   //数据级别,DEFAULT 3，最高级别3，最低级别0
@property (nonatomic) NSInteger date;    //创建时间， 本地到秒
@property (nonatomic,copy) NSString *ei; //事件id
@property (nonatomic,copy) NSString *sendMessage; //组装好的发送数据
@property (nonatomic,copy) NSString *msgKey; //当前数据的唯一标识，uuid的md5值
@property (nonatomic,copy) NSString *sendState;   //发送状态 0发送失败  1未发送  2发送中  3发送完成

@end

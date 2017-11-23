//
//  IADebugger.h
//  IASDKCore
//
//  Created by Inneractive on 15/03/2017.
//  Copyright © 2017 Inneractive. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "IAInterfaceBuilder.h"

@protocol IADebuggerBuilder <NSObject>

@required

@property (nonatomic, copy, nullable) NSString *server;
@property (nonatomic, copy, nullable) NSString *database;
@property (nonatomic, copy, nullable) NSString *mockResponsePath;

@end

@interface IADebugger : NSObject <IAInterfaceBuilder, IADebuggerBuilder, NSCopying>

+ (instancetype _Nullable)build:(void(^ _Nonnull)(id<IADebuggerBuilder> _Nonnull builder))buildBlock;

@end

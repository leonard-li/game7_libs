//
//  ADJPValidationInfo.h
//  AdjustPurchase
//
//  Created by Uglješa Erceg on 09/11/15.
//  Copyright © 2015 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ADJPCommon.h"

/**
 *  @brief  Object which is sent as response from AdjustPurchase module in
 *          adjustValidationUpdate: method.
 */
@interface ADJPValidationInfo : NSObject

/**
 *  @property   message
 *
 *  @brief      Text message about current state of receipt validation.
 */
@property (nonatomic, copy) NSString *message;

/**
 *  @property   statusCode
 *
 *  @brief      Status code returned from adjust backend server.
 */
@property (nonatomic, assign) int statusCode;

/**
 *  @property   validationState
 *
 *  @brief      State of server side receipt validation.
 */
@property (nonatomic, assign) ADJPValidationState validationState;

/**
 *  @brief  Get validation state enumeration value as string.
 *
 *  @return Validation state value as string.
 */
- (NSString *)getValidationStateAsString;

@end

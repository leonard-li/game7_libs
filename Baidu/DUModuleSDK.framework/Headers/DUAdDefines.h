//
//  DUAdDefines.h
//  DUModuleSDK
//
//  Created by baidu on 17/1/5.
//  Copyright © 2017年 baidu. All rights reserved.
//

#ifndef DUAdDefines_h
#define DUAdDefines_h

#define DU_CLASS_EXPORT __attribute__((visibility("default")))
#define DU_DEPRECATED __attribute__((deprecated))

#if ! __has_feature(nullability)
#define NS_ASSUME_NONNULL_BEGIN
#define NS_ASSUME_NONNULL_END
#define nullable
#define __nullable
#endif

#ifndef DU_SUBCLASSING_RESTRICTED
#if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#define DU_SUBCLASSING_RESTRICTED __attribute__((objc_subclassing_restricted))
#else
#define DU_SUBCLASSING_RESTRICTED
#endif
#endif


#endif /* DUAdDefines_h */

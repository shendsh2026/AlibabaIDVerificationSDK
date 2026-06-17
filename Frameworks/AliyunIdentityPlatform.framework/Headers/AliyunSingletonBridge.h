//
//  AliyunSingletonBridge.h
//  AliyunIdentityPlatform
//
//  Created by 顾鹿 on 2025/4/14.
//  Copyright © 2025 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AliyunIdentityCenter.h"
NS_ASSUME_NONNULL_BEGIN

@interface AliyunSingletonBridge : NSObject
+ (id)sharedIdentityCenter;
@end

NS_ASSUME_NONNULL_END

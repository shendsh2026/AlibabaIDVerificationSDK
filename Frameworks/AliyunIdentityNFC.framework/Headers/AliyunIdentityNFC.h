//
//  AliyunIdentityNFC.h
//  AliyunIdentityNFC
//
//  Created by 顾鹿 on 2025/3/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AliyunIdentityPlatform/AliyunIdentityCenter.h>

//! Project version number for AliyunIdentityNFC.
FOUNDATION_EXPORT double AliyunIdentityNFCVersionNumber;

//! Project version string for AliyunIdentityNFC.
FOUNDATION_EXPORT const unsigned char AliyunIdentityNFCVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AliyunIdentityNFC/PublicHeader.h>


@interface AliyunIdentityNFC : NSObject

/**
 * 启动NFFC识别
 */
+ (void)startNFCWithController:(UIViewController *)currentViewController;

+ (BOOL)isOldDevice;

@end

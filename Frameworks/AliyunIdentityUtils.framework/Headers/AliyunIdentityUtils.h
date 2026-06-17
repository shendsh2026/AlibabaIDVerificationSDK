//
//  AliyunIdentityUtils.h
//  AliyunIdentityUtils
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityUtils_h
#define AliyunIdentityUtils_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIView+Aliyun.h"
#import "NSArray+Aliyun.h"
#import "UIColor+Aliyun.h"
#import "NSDictionary+Aliyun.h"
#import "UIViewController+Aliyun.h"
#import "UIImage+Aliyun.h"
#import <AVFoundation/AVFoundation.h>

//! Project version number for AliyunIdentityUtils.
FOUNDATION_EXPORT double AliyunIdentityUtilsVersionNumber;

//! Project version string for AliyunIdentityUtils.
FOUNDATION_EXPORT const unsigned char AliyunIdentityUtilsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AliyunIdentityUtils/PublicHeader.h>

@interface AliyunIdentityUtils : NSObject

+ (NSString *)appName;

+ (NSString *)appVersion;

+ (NSString *)osVersion;

+ (NSString*)deviceVersion;

+ (BOOL)isNetworkResValid:(NSDictionary *)dic;

+ (NSDictionary *)json2Dictionary:(NSString *)json;

+ (UIImage *)fixTakenPhoto:(UIImage *)aImage;

+ (UIImage *)cropImage:(UIImage *)srcImage withSrcRect:(CGRect) srcRect withDstRect:(CGRect) dstRect;

+ (UIImage *)cropImage:(UIImage *)srcImage cameraResolution:(CGSize)cameraResolution screenResolution:(CGSize)screenResolution cropRect:(CGRect)cropRect;

+ (NSString *)genOssFileName:(NSString *) prefix withType:(NSString *)type whithExt:(NSString *)fileExt;

+ (NSData *)scaleImage:(UIImage *)srcImage withMaxWidth:(CGFloat) maxWidth withQuality:(CGFloat) quality;
+ (UIImage *)scaleImage:(UIImage *)srcImage withMaxWidth:(CGFloat) maxWidth;

+ (long)systemCurrentMiliSeconds;
+ (long)systemCurrentSeconds;

+ (void)initLanguage;
+ (NSString*)getLocalizedString:(NSString*)keyName;

+ (void)generateVideoFileWithFileName:(NSString *)fileName imageArray:(NSArray *)imageArr filePath:(NSURL *)filePath outputSize:(CGSize)outputSize handler:(void (^)(void))handler;

+ (void)removeWorkingDirectoryWithPath:(NSURL *)filePath;

+ (void)createWorkingDirectoryWithPath:(NSURL *)filePath;

+ (CVPixelBufferRef )pixelBufferFromCGImage:(CGImageRef)image size:(CGSize)size;

+ (UIColor *)colorFromHexString:(NSString *)hexString;

+ (UIImage *)imageFromBase64String:(NSString *)base64String;

+ (BOOL )checkDataSourceWithValue:(id)value key:(NSString *)key;

+ (UIFont *)defaultFontWithSize:(CGFloat)size systemFont:(UIFont *)systemFont;

+ (void) lp:(int)key withId:(NSString *)certifyId ;

+ (NSString *)getDateStr;

+ (NSString *)getPemPublicKey;

+ (NSString *)getRSASign;
+ (NSString*)getPreferredLanguage;

+ (NSString *)getFaceActionWithCode:(NSString *)code;
+ (NSString *)getFaceActionWithTask:(NSString *)task;

+ (NSMutableArray *)randomItemsFromArray:(NSArray *)array count:(NSInteger)count;

/// 当前 App CPU 使用率，单位：%
+ (double)currentAppCPUUsage;

/// 当前 App 内存使用量，单位：MB
+ (double)currentAppMemoryUsageMB;

@end

#endif

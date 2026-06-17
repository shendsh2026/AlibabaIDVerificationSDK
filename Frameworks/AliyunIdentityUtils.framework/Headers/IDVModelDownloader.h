//
//  IDVModelDownloader.h
//  AliyunIdentityUtils
//
//  Created by 顾鹿 on 2026/1/18.
//  Copyright © 2026 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>
// 基础 URL
#define BASE_MODEL_URL @"https://hkwebcdn.yuncloudauth.com/model/1.0.0/"

// 模型文件列表
#define CARD_DETECTION_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"CardDetection.mnn"]
#define FACE_OCC_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"face_occ.mnn"]
#define FACE_QUALITYSCORE_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"face_qualityscore.mnn"]
#define FACEDET_YOLO_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"facedet_yolo.mnn"]
#define BLINK_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"blink.mnn"]
#define LANDMARK_URL [NSString stringWithFormat:@"%@%@", BASE_MODEL_URL, @"landmark.mnn"]

// 模型文件名
#define CARD_DETECTION_FILE @"CardDetection.mnn"
#define FACE_OCC_FILE @"face_occ.mnn"
#define FACE_QUALITYSCORE_FILE @"face_qualityscore.mnn"
#define FACEDET_YOLO_FILE @"facedet_yolo.mnn"
#define BLINK_FILE @"blink.mnn"
#define LANDMARK_FILE @"landmark.mnn"

NS_ASSUME_NONNULL_BEGIN

@interface IDVModelDownloader : NSObject
+ (void)downloadAllModelsIfNeededWithCompletion:(void (^)(BOOL success, NSArray<NSString *> * _Nullable failedFiles))completion;

@end

NS_ASSUME_NONNULL_END

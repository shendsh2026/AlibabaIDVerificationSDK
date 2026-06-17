//
//  AliyunIdentityCenter.h
//  AliyunIdentityPlatform
//
//  Created by nansong.zxc on 2020/7/24.
//  Copyright © 2020 aliyun.com. All rights reserved.
//

#ifndef AliyunIdentityCenter_h
#define AliyunIdentityCenter_h

#import "AliyunIdentityCom.h"
#import <UIKit/UIKit.h>
#import "AliyunIdentityOcrInfo.h"
#import "CustomConfigModel.h"
extern id g_sharedInstance;

typedef NS_ENUM(NSInteger, AliyunIdentityOSSFileIdx){
    IOF_INVALID,
    IOF_IDCARD_FRONT,
    IOF_IDCARD_BACK,
    IOF_BANK,
    IOF_FACE_IMAGE
};

@interface AliyunIdentityCenter : NSObject
@property(nonatomic, copy) NSString *certifyId;
@property(nonatomic, copy) NSString *protocol;
@property(nonatomic, strong) AliyunIdentityVerifyBlock completionCallback;
@property(nonatomic, strong) NSDictionary *extParams;
@property(nonatomic, strong) UIViewController *currentViewController;
@property(nonatomic, strong) NSDictionary *deviceConfig;
@property(nonatomic, copy) NSString *metaInfo;
@property(nonatomic, strong) NSTimer *sdkMaxTimeOutTimer;
@property(atomic, strong) NSDictionary *toygerUploadParams;
@property(atomic, strong) NSDictionary *toygerAlgorithmParams;
@property(atomic, strong) NSMutableArray *taskArray;
@property(nonatomic, copy) NSMutableArray *TemplateConfig;
@property(nonatomic, assign) long TemplateRanCount;
@property(nonatomic, copy) NSString *TemplateType;

//-----------------------------------------
@property(nonatomic, strong) AliyunIdentityOcrInfo *ocrInfo;
@property(nonatomic, strong) UIImage *idcardFrontImage;
@property(nonatomic, strong) UIImage *idcardFrontCropImage;
@property(nonatomic, strong) UIImage *idcardFrontCropBackImage;
@property(nonatomic, copy) NSString *idcardFrontOss;
@property(nonatomic, strong) NSString *idcardFrontImageBase64;
@property(nonatomic, strong) UIImage *idcardBackImage;
@property(nonatomic, strong) UIImage *idcardBackCropImage;
@property(nonatomic, copy) NSString *idcardBackOss;
@property(nonatomic, strong) NSString *idcardBackImageBase64;

//-----------------------------------------
@property(nonatomic, strong) UIImage *faceHighQualityImage;
@property(nonatomic, strong) NSData *faceHighQualityImageHash;
@property(nonatomic, strong) NSString *faceImageOss;
@property(nonatomic, strong) NSString *faceImageBase64;

@property(nonatomic, strong) UIImage *faceOpenMouthImage;
@property(nonatomic, strong) NSData *faceOpenMouthImageHash;
@property(nonatomic, strong) NSString *openMouthImageOss;
@property(nonatomic, strong) NSString *openMouthImageBase64;

@property(nonatomic, strong) UIImage *faceBlinkImage;
@property(nonatomic, strong) NSData *faceBlinkImageHash;
@property(nonatomic, strong) NSString *faceBlinkImageOss;
@property(nonatomic, strong) NSString *faceBlinkImageBase64;

@property(nonatomic, strong) UIImage *faceHeadLeftImage;
@property(nonatomic, strong) NSData *faceHeadLeftImageHash;
@property(nonatomic, strong) NSString *faceHeadLeftImageOss;
@property(nonatomic, strong) NSString *faceHeadLeftImageBase64;


@property(nonatomic, strong) UIImage *faceHeadRightImage;
@property(nonatomic, strong) NSData *faceHeadRightImageHash;
@property(nonatomic, strong) NSString *faceHeadRightImageOss;
@property(nonatomic, strong) NSString *faceHeadRightImageBase64;


// 是否开启上传备份的人脸图片
@property(nonatomic, assign) BOOL isOpenFaceBackup;
@property(nonatomic, strong) UIImage *backupFaceImage;
@property(nonatomic, strong) NSData *backupFaceImageHash;
@property(nonatomic, strong) NSString *backupFaceImageOss;
@property(nonatomic, strong) NSString *backupFaceImageBase64;


@property(nonatomic, strong) NSData *zimVideoHash;
@property(nonatomic, strong) NSString *zimVideoOss;
@property(nonatomic, strong) NSData *photinusVideoHash;
@property(nonatomic, strong) NSString *photinusVideoOss;

@property(nonatomic, assign) BOOL isSelectedPhoto;

@property(nonatomic, strong) NSString *faceLivenessFarNearOpen;
@property(nonatomic, strong) NSString *model;
@property(nonatomic, strong) NSDictionary *faceLivenessFarNearConfig;
@property(nonatomic, strong) NSString *appQualityCheck;
@property(nonatomic, strong) NSString *clientLivenessTimeout;

@property(nonatomic, strong) UIImage *farImage;
@property(nonatomic, strong) NSData *farImageHash;
@property(nonatomic, strong) NSString *farImageOss;
@property(nonatomic, strong) NSString *farBase64;

@property(nonatomic, strong) UIImage *closeImage;
@property(nonatomic, strong) NSData *closeImageHash;
@property(nonatomic, strong) NSString *closeImageOss;
@property(nonatomic, strong) NSString *closeImageBase64;

@property(nonatomic, strong) NSArray *docPageConfig;
@property(nonatomic, assign) int docPageNumber;
@property(nonatomic, strong) NSDictionary *nfcConfig;
@property(nonatomic, assign) int nfcMode;

//ocr是否展示引导页
@property(nonatomic, strong) NSString *showGuidePage;
//ocr模式 拍照 shoot 扫描 scan 自动切换 auto
@property(nonatomic, strong) NSString *docModel;
//文件是oss/base64
@property(nonatomic, strong) NSString *fileType;
//ocr是否开启姓名标准化
@property(nonatomic, strong) NSString *ocrValueStandard;

//-----------------------------------------
@property(atomic, assign) BOOL isBusy;
@property(nonatomic, assign) long verifyStartTime;
@property(nonatomic, strong) CustomConfigModel *customConfig;
@property(nonatomic, strong) NSString *sign;

// 算法协议降级开关 后续稳定可以同蚂蚁算法模块一起删除
@property(nonatomic, strong) NSString *deviceAlgoDegrade;
// 是否采集眨眼视频
@property(nonatomic, strong) NSString *docVideo;

// 下发全球加速域名
@property(nonatomic, strong) NSMutableArray *authUrls;
// 是否传入protocol参数Y/N
@property(nonatomic, strong) NSString *useProtocol;

@property(nonatomic, strong) NSData *aesIV;

// 印尼身份证权威源协议页面
@property(nonatomic, strong) NSString *authorizationAgreementLinkEn;
@property(nonatomic, strong) NSString *authorizationAgreementLinkId;
@property(nonatomic, strong) NSString *timestamp;
@property(nonatomic, strong) NSString *useOssSdk;
@property(nonatomic, strong) NSString *websocketSwitch;
@property(nonatomic, strong) NSString *cardAllowSizeRatio;
@property(nonatomic, strong) NSString *cardAllowTiltAngle;

+ (AliyunIdentityCenter *) sharedInstance;

- (void)sendResWithCode:(int)code withMessage:(NSString *)message withSubCode:(NSString *)subCode withOcrInfo:(AliyunIdentityOcrInfo *)ocrInfo;
- (void)clear;
- (BOOL)isCrashDetectEnable;

@end
#endif /* AliyunIdentityCenter_h */

//
//  WebSocketManager.h
//  AliyunIdentityUtils
//
//  Created by 顾鹿 on 2026/3/23.
//  Copyright © 2026 aliyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AliyunIdentityUtils/IDVWebSocket.h>
NS_ASSUME_NONNULL_BEGIN

typedef void(^WebSocketOpenBlock)(void);
typedef void(^WebSocketMessageBlock)(id message); // NSString * or NSData *
typedef void(^WebSocketErrorBlock)(NSError *error);
typedef void(^WebSocketCloseBlock)(NSInteger code, NSString *reason);

@interface WebSocketManager : NSObject <IDVWebSocketDelegate>

@property (nonatomic, strong) IDVWebSocket *webSocket;
@property (nonatomic, strong) NSURL *websocketURL;
@property (nonatomic, strong) NSString *transactionId;
- (instancetype)initWithURL:(NSURL *)url transactionId:(NSString *)transactionId;
- (void)connect;
- (void)disconnect;
- (void)sendMessage:(NSString *)message;
- (void)sendData:(NSData *)data;
- (NSString *)buildAWAPMessageWithBody:(NSDictionary *)body type:(NSString *)type;
- (NSString *)currentTimestamp;

@property (nonatomic, copy) WebSocketOpenBlock openBlock;
@property (nonatomic, copy) WebSocketMessageBlock messageBlock;
@property (nonatomic, copy) WebSocketErrorBlock errorBlock;
@property (nonatomic, copy) WebSocketCloseBlock closeBlock;
@property (nonatomic, assign) int retryCount;
@property (nonatomic, strong) NSTimer *reconnectTimer;

/**
 * 指数退避重连：第1次2秒、第2次4秒、第3次8秒...
 * 延迟时间 = 2^(retryCount) 秒，最大重试8次
 */
- (void)reconnectWithBackoff;

/**
 * 重置重连计数器（连接成功后调用）
 */
- (void)resetRetryCount;

@end

NS_ASSUME_NONNULL_END

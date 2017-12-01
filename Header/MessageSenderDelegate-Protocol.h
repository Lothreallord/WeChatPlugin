//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageData, NSString;

@protocol MessageSenderDelegate <NSObject>
- (void)onSendFinished:(NSString *)arg1 taskId:(unsigned long long)arg2 msgData:(MessageData *)arg3;

@optional
- (void)notifyUpdateVideoStatus:(NSString *)arg1 msgData:(MessageData *)arg2;
- (void)notifyCheckQQ;
- (void)modifyMsgField:(NSString *)arg1 msgData:(MessageData *)arg2 bitSet:(unsigned int)arg3;
- (void)notifyUploadProgress:(NSString *)arg1 msgData:(MessageData *)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
@end

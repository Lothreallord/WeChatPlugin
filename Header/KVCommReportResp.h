//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

__attribute__((visibility("hidden")))
@interface KVCommReportResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasKvresponBuffer:1;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *kvresponBuffer;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetKvresponBuffer:) SKBuiltinBuffer_t *kvresponBuffer; // @synthesize kvresponBuffer;
@property(readonly, nonatomic) BOOL hasKvresponBuffer; // @synthesize hasKvresponBuffer;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UploadMyPanelListRequest : PBGeneratedMessage
{
    unsigned int hasOpCode:1;
    unsigned int opCode;
    NSMutableArray *mutableProductIdlistList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableProductIdlistList; // @synthesize mutableProductIdlistList;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
- (void).cxx_destruct;
- (void)addProductIdlistFromArray:(id)arg1;
- (void)addProductIdlist:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *productIdlist; // @dynamic productIdlist;
- (id)productIdlistList;
- (id)init;

@end

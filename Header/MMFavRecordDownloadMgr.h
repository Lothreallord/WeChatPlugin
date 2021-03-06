//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"

@class CdnFavMediaInfo, FavoritesItem, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMFavRecordDownloadMgr : MMService <ICdnComMgrExt, MMService>
{
    FavoritesItem *m_curDownFavItem;
    FavoritesItem *m_waitDownFavItem;
    NSMutableArray *m_arrCDNDownloadInfo;
    CdnFavMediaInfo *m_curCdnFavMediaInfo;
}

@property(retain, nonatomic) CdnFavMediaInfo *m_curCdnFavMediaInfo; // @synthesize m_curCdnFavMediaInfo;
@property(retain, nonatomic) FavoritesItem *m_waitDownFavItem; // @synthesize m_waitDownFavItem;
@property(retain, nonatomic) FavoritesItem *m_curDownFavItem; // @synthesize m_curDownFavItem;
- (void).cxx_destruct;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)CheckDownloadRecordData;
- (void)StartDownloadCurFav;
- (id)getDownloadInfo:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (void)StopDownloadFavItemRecord:(id)arg1;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadByFavItemRecord:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


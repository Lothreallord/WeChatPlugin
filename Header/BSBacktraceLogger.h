//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BSBacktraceLogger : NSObject
{
}

+ (id)bs_backtraceOfAllThread;
+ (id)bs_backtraceOfMainThread;
+ (id)bs_backtraceOfCurrentThread;
+ (id)bs_backtraceOfMachThread:(unsigned int)arg1;
+ (id)bs_backtraceOfNSThread:(id)arg1;
+ (void)load;

@end

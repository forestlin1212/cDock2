//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DOCKStackPreview : NSObject
{
    unsigned long long _spaceDownTime;
    id _preview;
    unsigned long long _index;
    BOOL _shown;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long spaceDownTime; // @synthesize spaceDownTime=_spaceDownTime;
- (void).cxx_destruct;
- (void)hide:(BOOL)arg1;
- (void)show:(id)arg1 previewRect:(CDStruct_caf9bca6)arg2 forIndex:(unsigned long long)arg3 animate:(BOOL)arg4;
@property(readonly, nonatomic) unsigned int wid; // @dynamic wid;
- (void)dealloc;
- (id)initWithURL:(id)arg1 maxSize:(struct CGSize)arg2 spaceDownTime:(unsigned long long)arg3 doubleClickCallback:(CDUnknownBlockType)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Tile;

@interface DRAGTimerInfo : NSObject
{
    unsigned char _blinkCount;
    _Bool _iconModified;
    _Bool _endState;
    Tile *_tile;
}

@property(nonatomic) _Bool endState; // @synthesize endState=_endState;
@property(nonatomic) _Bool iconModified; // @synthesize iconModified=_iconModified;
@property(nonatomic) unsigned char blinkCount; // @synthesize blinkCount=_blinkCount;
@property(retain, nonatomic) Tile *tile; // @synthesize tile=_tile;
- (void).cxx_destruct;

@end


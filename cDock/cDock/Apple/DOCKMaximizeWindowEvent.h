//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOCKWindowEvent.h"

@interface DOCKMaximizeWindowEvent : DOCKWindowEvent
{
    unsigned int _transactionID;
    _Bool _animateWindow;
}

- (void)perform:(CDStruct_95d471ab *)arg1;
- (id)initWithWindow:(unsigned int)arg1 transactionID:(unsigned int)arg2 animateWindow:(_Bool)arg3;

@end


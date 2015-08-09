//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECSBDragState.h"

@interface ECSBBeginningDragState : ECSBDragState
{
    struct CGPoint _location;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
- (id)description;
- (void)cancelDrag:(id)arg1 animateSlideBack:(_Bool)arg2;
- (void)_restoreItemLayer:(id)arg1 toGridLayer:(id)arg2 layerSource:(id)arg3 animateSlideBack:(BOOL)arg4;
- (int)type;
- (id)initWithDragCapture:(id)arg1 pager:(id)arg2 page:(id)arg3 group:(id)arg4 item:(id)arg5 rootLayer:(id)arg6;

@end


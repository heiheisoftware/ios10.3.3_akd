//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAppleIDAuthenticationContext;

@protocol AKFollowUpAuthHandler <NSObject>
- (void)reauthenticateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

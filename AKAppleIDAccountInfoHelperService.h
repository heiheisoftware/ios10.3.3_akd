//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAccountManager;

@interface AKAppleIDAccountInfoHelperService : NSObject
{
    AKAccountManager *_accountManager;
}

+ (id)sharedService;
- (void).cxx_destruct;
- (void)_broadcastEmailChangeNotification;
- (void)_updateAccount:(id)arg1 withRefreshedEmails:(id)arg2 altDSID:(id)arg3 modifyAliases:(_Bool)arg4;
- (void)refreshAccountUsernamesForAltDSID:(id)arg1 withNewEmailList:(id)arg2;
- (void)refreshAccountUsernamesForAltDSID:(id)arg1;
- (void)fetchEmailsForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setLastEmailListRequestDate:(id)arg1;
- (id)lastEmailListRequestDate;
- (id)init;

@end

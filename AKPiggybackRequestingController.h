//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KCJoiningRequestSecretDelegate.h"

@class ACAccount, AKAppleIDAuthenticationContext, AKAuthenticationServerResponse, AKCircleRequestContext, KCJoiningRequestSecretSession, NSDictionary, NSError, NSNumber, NSString;

@interface AKPiggybackRequestingController : NSObject <KCJoiningRequestSecretDelegate>
{
    NSString *_latestIDMSData;
    AKCircleRequestContext *_currentReplyContext;
    _Bool _unitTestContext;
    id <AKPiggybackRequestingControllerDelegate> _delegate;
    ACAccount *_authKitAccount;
    AKAppleIDAuthenticationContext *_initiatingContext;
    NSString *_initiatingPassword;
    AKAuthenticationServerResponse *_initialAuthResponse;
    KCJoiningRequestSecretSession *_requestSession;
    NSNumber *_capturedCode;
    NSError *_escapeHatchTrigger;
    NSError *_escapeHatchError;
    NSDictionary *_authResults;
    double _initialHandshakeTimeout;
}

@property(nonatomic) double initialHandshakeTimeout; // @synthesize initialHandshakeTimeout=_initialHandshakeTimeout;
@property(nonatomic) _Bool unitTestContext; // @synthesize unitTestContext=_unitTestContext;
@property(retain, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
@property(retain, nonatomic) NSError *escapeHatchError; // @synthesize escapeHatchError=_escapeHatchError;
@property(retain, nonatomic) NSError *escapeHatchTrigger; // @synthesize escapeHatchTrigger=_escapeHatchTrigger;
@property(retain, nonatomic) NSNumber *capturedCode; // @synthesize capturedCode=_capturedCode;
@property(retain, nonatomic) KCJoiningRequestSecretSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, nonatomic) AKAuthenticationServerResponse *initialAuthResponse; // @synthesize initialAuthResponse=_initialAuthResponse;
@property(retain, nonatomic) NSString *initiatingPassword; // @synthesize initiatingPassword=_initiatingPassword;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *initiatingContext; // @synthesize initiatingContext=_initiatingContext;
@property(retain, nonatomic) ACAccount *authKitAccount; // @synthesize authKitAccount=_authKitAccount;
@property(nonatomic) __weak id <AKPiggybackRequestingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearCaptureState;
- (void)_cacheSecondFactor:(id)arg1 codeCaptureError:(id)arg2;
- (id)_capturedCodeString;
- (void)_processCodeEntryErrorWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processCachedUserInputWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_promptForSecretWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleVerificationError:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)processAccountCode:(id)arg1 error:(id *)arg2;
- (id)verificationFailed:(_Bool)arg1;
- (id)secret;
- (_Bool)isDone;
- (_Bool)_shouldContinueProcessing:(id *)arg1;
- (id)idmsData;
- (id)contextWithIncomingPayload:(id)arg1;
- (void)replyWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_sendDeviceCancelledReplyWithContext:(id)arg1;
- (void)_deliverPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearSessionState;
- (void)_processHandshakeWithContext:(id)arg1 handshakeReply:(id)arg2 andHandshakeError:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_initiatePiggybackingWithCleanSession:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)initiatePiggybackingWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithServerResponse:(id)arg1 andDelegate:(id)arg2;

@end


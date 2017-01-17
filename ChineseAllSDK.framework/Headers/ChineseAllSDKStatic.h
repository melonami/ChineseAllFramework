//
//  ChineseAllSDKStatic.h
//  ChineseAllSDKStatic
//
//  Created by 黄珂 on 16/6/21.
//  Copyright © 2016年 huangke. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SuccessBlock)(NSString* userid,NSString* rndcode,BOOL isGuest);
typedef void (^FailedBlock)(NSString* message);
typedef void (^LogoutSuccessBlock)(NSString* message);
//! Project version number for ChineseAllSDK.
FOUNDATION_EXPORT double ChineseAllSDKVersionNumber;

//! Project version string for ChineseAllSDK.
FOUNDATION_EXPORT const unsigned char ChineseAllSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ChineseAllSDK/PublicHeader.h>


@interface CAgamesAgentManager:NSObject
@property (strong,nonatomic) SuccessBlock successBlock;
@property (strong,nonatomic) FailedBlock failedBlock;
@property (strong,nonatomic) LogoutSuccessBlock logoutSuccessBlock;
@property (strong,nonatomic) NSString* userId;
@property (strong,nonatomic) NSString* userName;
@property (assign) BOOL isUserLogout;
+(CAgamesAgentManager*)getInstance;

-(BOOL)getLoginStatus;

-(void)init:(NSString*)gameid:(NSString*)screenOrientation:(UIViewController*)gameVC;

-(void)login:(UIViewController*)gameVC successBlock:(SuccessBlock)successblock failedBlock:(FailedBlock)failedblock;

-(void)logout:(LogoutSuccessBlock)logoutSuccessBlock;

-(void)userCenter:(UIViewController*)gameVC;

-(void)getScreenOrientation;

-(void)setLogout:(LogoutSuccessBlock)logoutBlock;

-(BOOL)isGuest;

-(void)accountVisitor;

@end

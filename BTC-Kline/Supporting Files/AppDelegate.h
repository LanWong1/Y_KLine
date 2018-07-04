//
//  AppDelegate.h
//  BTC-Kline
//
//  Created by yate1996 on 16/4/27.
//  Copyright © 2016年 yate1996. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICETool.h"
#import "ICENpTrade.h"
#import "ICEQuote.h"
//#import "LoginVC.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, assign) BOOL isEable;

@property (strong, nonatomic) ICETool* iceTool;
@property (strong, nonatomic) ICENpTrade* iceNpTrade;
@property (strong, nonatomic) ICEQuote* iceQuote;
@property (strong,nonatomic) WpTradeAPIServerCallbackReceiverI* wpTradeAPIServerCallbackReceiverI;
@property (strong,nonatomic) NpTradeAPIServerCallbackReceiverI* npTradeAPIServerCallbackReceiverI;
@property (strong,nonatomic) WpQuoteServerCallbackReceiverI* wpQuoteServerCallbackReceiverI;
@property (strong,nonatomic) NSString* userName;
@property (strong,nonatomic) NSString* passWord;
@property (strong,nonatomic) NSString* userID;
@property (strong,nonatomic) NSString* strAcc;
//@property (strong,nonatomic) LoginVC* loginVC;
@property (nonatomic) int loginFlag;
@property (strong,nonatomic) NSString* strCmd;



@end


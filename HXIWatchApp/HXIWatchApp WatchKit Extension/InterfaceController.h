//
//  InterfaceController.h
//  HXIWatchApp WatchKit Extension
//
//  Created by 建承 马  on 2018/7/4.
//  Copyright © 2018年 建承 马 . All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController
@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceLabel *labelMoney;
- (IBAction)InvestButton;
- (IBAction)signButton;

@end

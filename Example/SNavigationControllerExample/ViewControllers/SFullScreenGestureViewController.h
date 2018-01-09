//
//  Copyright © 2017 Cyrex. All rights reserved.
//
//  File name: SFullScreenGestureViewController.h
//  Author:    ZhiweiSun @Cyrex
//  E-mail:    szwathub@gmail.com
//
//  Description:
//
//  History:
//      11/10/2017: Created by Cyrex on 11/10/2017
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ScreenEdgePanGstureState) {
    ScreenEdgePanGstureStateOff = 0,
    ScreenEdgePanGstureStateOn
};

@interface SFullScreenGestureViewController : UIViewController

@property (nonatomic, assign) ScreenEdgePanGstureState state;

@end

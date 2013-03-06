//
//  FakePushAppDelegate.h
//  FakePush
//
//  Created by Tom Horn on 8/02/11.
//  Copyright 2011 Cognethos Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FakePushViewController;

@interface FakePushAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FakePushViewController *viewController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet FakePushViewController *viewController;

@end


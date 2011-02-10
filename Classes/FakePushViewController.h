//
//  FakePushViewController.h
//  FakePush
//
//  Created by Tom Horn on 8/02/11.
//  Copyright 2011 Cognethos Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FakePushViewController : UIViewController {
	IBOutlet UITextView * pushMessage;
}

@property (retain, nonatomic) UITextView * pushMessage;

- (IBAction)onSchedule:(id)sender;
- (IBAction)onShowimage:(id)sender;

@end


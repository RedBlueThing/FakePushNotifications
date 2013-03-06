//
//  FakeImageBackground.h
//  FakePush
//
//  Created by Tom Horn on 8/02/11.
//  Copyright 2011 Cognethos Pty Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FakeImageBackground : UIViewController {
	IBOutlet UIImageView * backgroundImage;
}

@property (nonatomic,strong) UIImageView * backgroundImage;

- (IBAction)onTap:(id)sender;

@end

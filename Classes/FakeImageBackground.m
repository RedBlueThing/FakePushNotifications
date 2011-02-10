//
//  FakeImageBackground.m
//  FakePush
//
//  Created by Tom Horn on 8/02/11.
//  Copyright 2011 Cognethos Pty Ltd. All rights reserved.
//

#import "FakeImageBackground.h"

@implementation FakeImageBackground

@synthesize backgroundImage;

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
	
	// Replace this image with your own "in app" image (minus the status bar)
	
	self.backgroundImage.image = [UIImage imageNamed:@"Dad_Fake_NoPanic.PNG"];
    [super viewDidLoad];
}

- (IBAction)onTap:(id)sender
{
	[self.parentViewController dismissModalViewControllerAnimated:YES];	
}

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc. that aren't in use.
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {
	[backgroundImage release];
    [super dealloc];
}


@end

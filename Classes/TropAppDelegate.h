//
//  TropAppDelegate.h
//  Trop
//
//  Created by HSJC Student Account on 3/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TropAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
	IBOutlet UIBarButtonItem *editionsButton;
	IBOutlet UIBarButtonItem *aboutButton;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *editionsButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *aboutButton;

- (IBAction)viewPrevEditions:(id) sender;
- (IBAction)aboutView:(id) sender;

@end


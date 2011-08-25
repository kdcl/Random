//
//  randomAppDelegate.h
//  random
//
//  Created by Kdcl on 2011/8/25.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class randomViewController;

@interface randomAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet randomViewController *viewController;

@end

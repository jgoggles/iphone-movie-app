//
//  MovieAppDelegate.h
//  Movie
//
//  Created by Dan Weaver on 10/28/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MovieViewController;

@interface MovieAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MovieViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MovieViewController *viewController;

@end


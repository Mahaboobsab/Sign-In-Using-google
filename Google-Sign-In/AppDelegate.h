//
//  AppDelegate.h
//  Google-Sign-In
//
//  Created by Mahaboobsab Nadaf on 27/05/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate>

@property (strong, nonatomic) UIWindow *window;


@end


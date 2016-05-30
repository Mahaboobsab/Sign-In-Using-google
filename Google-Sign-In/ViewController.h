//
//  ViewController.h
//  Google-Sign-In
//
//  Created by Mahaboobsab Nadaf on 27/05/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>


@interface ViewController : UIViewController<GIDSignInUIDelegate>
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *myActivityIndicator;

@property (weak, nonatomic) IBOutlet GIDSignInButton *SignIn;




@end


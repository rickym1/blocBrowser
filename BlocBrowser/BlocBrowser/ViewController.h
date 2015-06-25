//
//  ViewController.h
//  BlocBrowser
//
//  Created by rick m on 6/23/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


/**
 Replaces the web view with a fresh one, erasing all history. Also updtes the URL field and toolbar buttons appropriately.
 */
- (void) resetWebView;


@end


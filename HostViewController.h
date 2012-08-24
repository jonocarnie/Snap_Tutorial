//
//  HostViewController.h
//  Snap
//
//  Created by Jonathan Carnie on 24/08/12.
//  Copyright (c) 2012 Hollance. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HostViewController;

@protocol HostViewControllerDelegate <NSObject>
-(void)hostViewControllerDidCancel:(HostViewController *)controller;
@end




@interface HostViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (nonatomic, weak) id <HostViewControllerDelegate> delegate;

@end

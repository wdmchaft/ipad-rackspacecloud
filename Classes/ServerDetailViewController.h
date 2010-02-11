//
//  ServerDetailViewController.h
//  RackspaceCloud
//
//  Created by Michael Mayo on 1/28/10.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASICloudServersServer;

@interface ServerDetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate> {
	
	UIPopoverController *popoverController;
	UINavigationBar *navigationBar;
	
	IBOutlet UITableView *tableView;
	
	id detailItem;
	
	ASICloudServersServer *server;
	
	IBOutlet UIImageView *logoImageView;
	IBOutlet UIImageView *backgroundImageView;
}

@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) IBOutlet UINavigationBar *navigationBar;
@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, retain) ASICloudServersServer *server;

@property (nonatomic, retain) id detailItem;

@property (nonatomic, retain) IBOutlet UIImageView *logoImageView;
@property (nonatomic, retain) IBOutlet UIImageView *backgroundImageView;

-(void)addButtonPressed:(id)sender;

@end

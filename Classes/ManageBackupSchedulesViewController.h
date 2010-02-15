//
//  ManageBackupSchedulesViewController.h
//  RackspaceCloud
//
//  Created by Michael Mayo on 2/9/10.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ServerDetailViewController, ASICloudServersBackupSchedule;

@interface ManageBackupSchedulesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	ServerDetailViewController *serverDetailViewController;
	NSArray *hours;
	NSArray *days;
	
	ASICloudServersBackupSchedule *backupSchedule;
	IBOutlet UITableView *tableView;
}

@property (nonatomic, retain) ServerDetailViewController *serverDetailViewController;
@property (nonatomic, retain) IBOutlet UITableView *tableView;


-(void)cancelButtonPressed:(id)sender;

@end

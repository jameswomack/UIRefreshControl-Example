//
//  CCMasterViewController.h
//  UIRefreshControl_Example
//
//  Created by James Womack on 2/26/13.
//  Copyright (c) 2013 James Womack. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCDetailViewController;

@interface CCMasterViewController : UITableViewController

@property (strong, nonatomic) CCDetailViewController *detailViewController;
@property (strong, nonatomic) NSMutableArray *objects;

@end

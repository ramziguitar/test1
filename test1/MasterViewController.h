//
//  MasterViewController.h
//  test1
//
//  Created by Ramzi Khoury on 2/6/13.
//  Copyright (c) 2013 Ramzi Khoury. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

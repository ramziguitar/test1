//
//  DetailViewController.h
//  test1
//
//  Created by Ramzi Khoury on 2/6/13.
//  Copyright (c) 2013 Ramzi Khoury. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

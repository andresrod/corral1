//
//  DetailViewController.h
//  corral1
//
//  Created by Andres Rodriguez on 12-12-21.
//  Copyright (c) 2012 yummy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

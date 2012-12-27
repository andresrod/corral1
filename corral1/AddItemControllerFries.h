//
//  AddItemControllerFries.h
//  corral1
//
//  Created by Andres Rodriguez on 12-12-26.
//  Copyright (c) 2012 yummy. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Fries;
@interface AddItemControllerFries : UITableViewController



@property (weak, nonatomic) IBOutlet UISwitch *saltSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *pepperSwitch;
@property (weak, nonatomic) IBOutlet UISegmentedControl *sizePicker;

@property (strong, nonatomic) Fries *friesItem;

@end

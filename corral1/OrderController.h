//
//  OrderController.h
//  corral1
//
//  Created by Andres Rodriguez on 12-12-21.
//  Copyright (c) 2012 yummy. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Burger;
@interface OrderController : NSObject

@property (nonatomic, copy) NSMutableArray *masterOrderList;

- (NSUInteger)countOfList;
- (Burger *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addOrderItemWithBurger:(Burger *)burgerItem;

@end

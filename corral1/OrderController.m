//
//  OrderController.m
//  corral1
//
//  Created by Andres Rodriguez on 12-12-21.
//  Copyright (c) 2012 yummy. All rights reserved.
//

#import "OrderController.h"
#import "Burger.h"

@interface OrderController ()
- (void)initializeDefaultDataList;
@end

@implementation OrderController

- (void)initializeDefaultDataList {
    NSMutableArray *orderList = [[NSMutableArray alloc] init];
    self.masterOrderList = orderList;
    Burger *burgerItem;
    
    burgerItem = [[Burger alloc] initWithLettuce:TRUE tomatoe:TRUE];
    [self addOrderItemWithBurger: burgerItem];
}

- (void)setMasterOrderList:(NSMutableArray *)newList {
    if (_masterOrderList != newList) {
        _masterOrderList = [newList mutableCopy];
    }
}

- (id)init {
    if (self = [super init]) {
        [self initializeDefaultDataList];
        return self;
    }
    return nil;
}

- (NSUInteger)countOfList {
    return [self.masterOrderList count];
}

- (Burger *)objectInListAtIndex:(NSUInteger)theIndex {
    return [self.masterOrderList objectAtIndex:theIndex];
}

- (void)addOrderItemWithBurger:(Burger *)burgerItem{
    [self.masterOrderList addObject:burgerItem];
}

@end

//
//  XYZAddToDoItem.m
//  com.learn.ToDoList
//
//  Created by m on 05/09/14.
//  Copyright (c) 2014 com.learn. All rights reserved.
//

#import "XYZAddToDoItem.h"

@interface XYZAddToDoItem()
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;


@end


@implementation XYZAddToDoItem


- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    //wenn man vom done Button kommt, dann ist das erfüllt
    if (sender != self.doneButton) {
        return; 
    }
    if (self.textField.text.length > 0) {
        XYZToDoItem *item1 = [[XYZToDoItem alloc] init];
        self.toDoItem = item1;
        self.toDoItem.itemName = self.textField.text;
        self.toDoItem.completed = NO;
    }
}

@end

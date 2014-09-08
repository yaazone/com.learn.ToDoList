//
//  XYZToDoList.h
//  com.learn.ToDoList
//
//  Created by m on 05/09/14.
//  Copyright (c) 2014 com.learn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoList : UITableViewController

@property NSMutableArray *toDoItems;


- (void)viewDidLoad;
- (void)loadInitalData;
//- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
//- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
@end

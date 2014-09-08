//
//  XYZToDoItem.h
//  com.learn.ToDoList
//
//  Created by m on 07/09/14.
//  Copyright (c) 2014 com.learn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;



@end

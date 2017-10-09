//
//  AppDelegate.h
//  MyContact
//
//  Created by Triyakom PT on 10/9/17.
//  Copyright © 2017 triyakom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


//
//  AppDelegate.h
//  CoreDataStack_Obj_C
//
//  Created by Franks, Kent on 5/12/15.
//  Copyright (c) 2015 Franks, Kent. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KefPersistenceController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, readonly) KefPersistenceController *persistenceController;

@end


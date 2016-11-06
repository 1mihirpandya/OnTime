//
//  AppDelegate.h
//  OnTime
//
//  Created by Brian Lin on 1/24/15.
//  Copyright (c) 2015 Brian Lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <CouchbaseLite/CouchbaseLite.h>
#import "CouchbaseLite/Couchbaselite.h"
#import "Couchbaselite/CBLDocument.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) CBLManager *manager;
@property (strong, nonatomic) CBLDatabase *database;
@property (strong, nonatomic) NSString *docID;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
- (BOOL)createTheManager;

@end


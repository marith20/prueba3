//
//  proyectoAppDelegate.h
//  proyecto
//
//  Created by Juan Camilo Vargas on 27/05/16.
//  Copyright 2016 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class proyectoViewController;

@interface proyectoAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet proyectoViewController *viewController;

@end

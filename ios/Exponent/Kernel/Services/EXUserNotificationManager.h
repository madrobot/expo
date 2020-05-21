// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>
#import "EXUserNotificationCenter.h"
#import "EXPendingNotification.h"
#import "EXNotifications.h"

#if __has_include(<EXNotifications/EXNotificationCenterDelegate.h>)
#import <EXNotifications/EXNotificationCenterDelegate.h>
#endif

@interface EXUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, EXNotificationsIdentifiersManager, EXNotificationsDelegate>

- (EXPendingNotification *)initialNotificationForExperience:(NSString *)experienceId;

@end

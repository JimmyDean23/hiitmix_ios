//
//  Workout.h
//  HIITMix
//
//  Created by Billy Dixon on 5/9/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Playlist;

@interface Workout : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) Playlist *playlist;

@end

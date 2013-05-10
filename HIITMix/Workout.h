//
//  Workout.h
//  HIITMix
//
//  Created by Billy Dixon on 5/9/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Interval, Playlist;

@interface Workout : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) Playlist *playlist;
@property (nonatomic, retain) NSSet *intervals;
@end

@interface Workout (CoreDataGeneratedAccessors)

- (void)addIntervalsObject:(Interval *)value;
- (void)removeIntervalsObject:(Interval *)value;
- (void)addIntervals:(NSSet *)values;
- (void)removeIntervals:(NSSet *)values;

@end

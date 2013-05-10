//
//  Interval.h
//  HIITMix
//
//  Created by Billy Dixon on 5/9/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Workout;

@interface Interval : NSManagedObject

@property (nonatomic, retain) NSDate * duration;
@property (nonatomic, retain) NSNumber * intensity;
@property (nonatomic, retain) Workout *workout;

@end

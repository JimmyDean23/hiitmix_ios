//
//  Playlist.h
//  HIITMix
//
//  Created by Billy Dixon on 5/9/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Track, Workout;

@interface Playlist : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) Workout *workout;
@property (nonatomic, retain) NSSet *tracks;
@end

@interface Playlist (CoreDataGeneratedAccessors)

- (void)addTracksObject:(Track *)value;
- (void)removeTracksObject:(Track *)value;
- (void)addTracks:(NSSet *)values;
- (void)removeTracks:(NSSet *)values;

@end

//
//  Track.h
//  HIITMix
//
//  Created by Billy Dixon on 5/9/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Playlist;

@interface Track : NSManagedObject

@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * artist;
@property (nonatomic, retain) NSSet *playlists;
@end

@interface Track (CoreDataGeneratedAccessors)

- (void)addPlaylistsObject:(Playlist *)value;
- (void)removePlaylistsObject:(Playlist *)value;
- (void)addPlaylists:(NSSet *)values;
- (void)removePlaylists:(NSSet *)values;

@end

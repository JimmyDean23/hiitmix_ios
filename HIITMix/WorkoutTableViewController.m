//
//  WorkoutTableViewController.m
//  HIITMix
//
//  Created by Billy Dixon on 5/3/13.
//  Copyright (c) 2013 Billy Dixon. All rights reserved.
//

#import "WorkoutTableViewController.h"

@implementation WorkoutTableViewController

- (UITableViewCell *)tableView:(UITableView *)sender
         cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell;
    cell = [self.tableView dequeueReusableCellWithIdentifier:@"WorkoutTitle”
                                                forIndexPath:indexPath];
    cell.textLabel.text = [self getMyDataForRow:indexPath.row inSection:indexPath.section];
    return cell;
}

@end

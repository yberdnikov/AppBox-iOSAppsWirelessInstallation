///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMBaseDfbReport.h"

@class DBTEAMGetActivityReport;

#pragma mark - API Object

///
/// The `GetActivityReport` struct.
///
/// Activity Report Result. Each of the items in the storage report is an array
/// of values, one value per day. If there is no data for a day, then the value
/// will be None.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGetActivityReport : DBTEAMBaseDfbReport <DBSerializable>

#pragma mark - Instance fields

/// Array of total number of adds by team members.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull adds;

/// Array of number of edits by team members. If the same user edits the same
/// file multiple times this is counted as a single edit.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull edits;

/// Array of total number of deletes by team members.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull deletes;

/// Array of the number of users who have been active in the last 28 days.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeUsers28Day;

/// Array of the number of users who have been active in the last week.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeUsers7Day;

/// Array of the number of users who have been active in the last day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeUsers1Day;

/// Array of the number of shared folders with some activity in the last 28
/// days.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeSharedFolders28Day;

/// Array of the number of shared folders with some activity in the last week.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeSharedFolders7Day;

/// Array of the number of shared folders with some activity in the last day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull activeSharedFolders1Day;

/// Array of the number of shared links created.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedLinksCreated;

/// Array of the number of views by team users to shared links created by the
/// team.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByTeam;

/// Array of the number of views by users outside of the team to shared links
/// created by the team.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByOutsideUser;

/// Array of the number of views by non-logged-in users to shared links created
/// by the team.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedLinksViewedByNotLoggedIn;

/// Array of the total number of views to shared links created by the team.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedLinksViewedTotal;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param startDate First date present in the results as 'YYYY-MM-DD' or None.
/// @param adds Array of total number of adds by team members.
/// @param edits Array of number of edits by team members. If the same user
/// edits the same file multiple times this is counted as a single edit.
/// @param deletes Array of total number of deletes by team members.
/// @param activeUsers28Day Array of the number of users who have been active in
/// the last 28 days.
/// @param activeUsers7Day Array of the number of users who have been active in
/// the last week.
/// @param activeUsers1Day Array of the number of users who have been active in
/// the last day.
/// @param activeSharedFolders28Day Array of the number of shared folders with
/// some activity in the last 28 days.
/// @param activeSharedFolders7Day Array of the number of shared folders with
/// some activity in the last week.
/// @param activeSharedFolders1Day Array of the number of shared folders with
/// some activity in the last day.
/// @param sharedLinksCreated Array of the number of shared links created.
/// @param sharedLinksViewedByTeam Array of the number of views by team users to
/// shared links created by the team.
/// @param sharedLinksViewedByOutsideUser Array of the number of views by users
/// outside of the team to shared links created by the team.
/// @param sharedLinksViewedByNotLoggedIn Array of the number of views by
/// non-logged-in users to shared links created by the team.
/// @param sharedLinksViewedTotal Array of the total number of views to shared
/// links created by the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate
                                     adds:(NSArray<NSNumber *> * _Nonnull)adds
                                    edits:(NSArray<NSNumber *> * _Nonnull)edits
                                  deletes:(NSArray<NSNumber *> * _Nonnull)deletes
                         activeUsers28Day:(NSArray<NSNumber *> * _Nonnull)activeUsers28Day
                          activeUsers7Day:(NSArray<NSNumber *> * _Nonnull)activeUsers7Day
                          activeUsers1Day:(NSArray<NSNumber *> * _Nonnull)activeUsers1Day
                 activeSharedFolders28Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders28Day
                  activeSharedFolders7Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders7Day
                  activeSharedFolders1Day:(NSArray<NSNumber *> * _Nonnull)activeSharedFolders1Day
                       sharedLinksCreated:(NSArray<NSNumber *> * _Nonnull)sharedLinksCreated
                  sharedLinksViewedByTeam:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByTeam
           sharedLinksViewedByOutsideUser:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByOutsideUser
           sharedLinksViewedByNotLoggedIn:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedByNotLoggedIn
                   sharedLinksViewedTotal:(NSArray<NSNumber *> * _Nonnull)sharedLinksViewedTotal;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetActivityReport` struct.
///
@interface DBTEAMGetActivityReportSerializer : NSObject

///
/// Serializes `DBTEAMGetActivityReport` instances.
///
/// @param instance An instance of the `DBTEAMGetActivityReport` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGetActivityReport` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGetActivityReport * _Nonnull)instance;

///
/// Deserializes `DBTEAMGetActivityReport` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGetActivityReport` API object.
///
/// @return An instantiation of the `DBTEAMGetActivityReport` object.
///
+ (DBTEAMGetActivityReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

@protocol ABI29_0_0RCTRedBoxExtraDataActionDelegate <NSObject>
- (void)reload;
@end

@interface ABI29_0_0RCTRedBoxExtraDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) id<ABI29_0_0RCTRedBoxExtraDataActionDelegate> actionDelegate;

- (void)addExtraData:(NSDictionary *)data forIdentifier:(NSString *)identifier;

@end

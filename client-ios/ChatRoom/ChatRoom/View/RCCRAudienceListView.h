//
//  RCCRAudienceListView.h
//  ChatRoom
//
//  Created by RongCloud on 2018/5/11.
//  Copyright © 2018年 rongcloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCCRAudienceModel.h"
@protocol RCCRAudienceDelegate;
@interface RCCRAudienceListView : UIView

- (instancetype)initWithAudiences:(NSArray *)audienceArr;

- (void)setModelArray:(NSArray<RCCRAudienceModel *> *)modelArray;
- (void)reloadInvitedStateWithUserId:(NSString *)userId;

/**
 delegate
 */
@property(nonatomic , weak)id <RCCRAudienceDelegate >delegate;


@end
@protocol RCCRAudienceDelegate <NSObject>

- (void)didSelectAudience:(RCCRAudienceModel *)model index:(NSInteger )index;

@end

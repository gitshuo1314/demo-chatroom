//
//  RCCEgiftModel.h
//  ChatRoom
//
//  Created by RongCloud on 2018/5/17.
//  Copyright © 2018年 rongcloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCChatroomGift.h"

@interface RCCRGiftModel : NSObject

@property (nonatomic, copy) NSString *giftId;

@property (nonatomic, copy) NSString *giftImageName;

@property (nonatomic, assign) NSInteger giftPrice;

@property (nonatomic, copy) NSString *giftName;

@property (nonatomic, assign) NSInteger giftNumber;

- (instancetype)initWithMessage:(RCChatroomGift *)giftMessage;

@end

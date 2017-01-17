//
//  TPGContactInfo.h
//  TestForAddressbook
//
//  Created by dvt04 on 17/1/17.
//  Copyright © 2017年 suma. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TPGContactInfo : NSObject

@property (nonatomic, strong) NSString *contactGivenName;
@property (nonatomic, strong) NSString *contactFamilyName;
@property (nonatomic, strong) NSString *contactJob;
@property (nonatomic, strong) NSString *contactNote;
@property (nonatomic, strong) NSString *contactNickName;
@property (nonatomic, strong) NSDictionary *contactPhones;
@property (nonatomic, strong) NSDictionary *contactPostalAddress;

@end

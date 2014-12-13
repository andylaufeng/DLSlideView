//
//  DLFIFOCache.h
//  DLSlideViewDemo
//
//  Created by Dongle Su on 14-12-13.
//  Copyright (c) 2014年 dongle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DLFIFOCache : NSObject

- (id)initWithCount:(int)count;

- (void)setObject:(id)object forKey:(NSString *)key;
- (id)objectForKey:(NSString *)key;
@end

//
//  Tweet.h
//  StarleaksDemoIOs
//
//  Created by Dambert on 3/11/16.
//  Copyright © 2016 com.starleaks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tweet : NSObject
@property(strong,nonatomic) NSString *tweetBody;
@property(strong,nonatomic) NSString *name;
@property(strong,nonatomic) NSString *tweetsAdd;
@property(nonatomic) BOOL retweeted;

-(NSInteger)numberCharacters;
@end

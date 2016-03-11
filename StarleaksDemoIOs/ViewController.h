//
//  ViewController.h
//  StarleaksDemoIOs
//
//  Created by Dambert on 3/10/16.
//  Copyright © 2016 com.starleaks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tweet.h"


@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *viewTweetBOdy;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (strong,nonatomic) Tweet *tweet;
- (IBAction)tweetAction:(id)sender;

@end


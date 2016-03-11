//
//  ViewController.m
//  StarleaksDemoIOs
//
//  Created by Dambert on 3/10/16.
//  Copyright © 2016 com.starleaks. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.tweet = [[Tweet alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tweetAction:(id)sender {
    
    self.tweet.tweetBody = self.viewTweetBOdy.text;
    
    NSString *result = [[NSString alloc] initWithFormat:@"Enviaste %li caracteres", (long)self.tweet.numberCharacters];
    self.label.text = result;
    [self.viewTweetBOdy resignFirstResponder]; //PARA PERDER EL FOCO
 
}
@end

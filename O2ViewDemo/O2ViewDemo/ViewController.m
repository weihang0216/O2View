//
//  ViewController.m
//  O2ViewDemo
//
//  Created by apple on 2021/10/21.
//

#import "ViewController.h"
#import "UITool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [UIView animateWithDuration:.25 animations:^{
        self.view.backgroundColor = CRMHexColor(0xABCDEF);     
    }];
}


@end

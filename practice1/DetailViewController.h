//
//  DetailViewController.h
//  practice1
//
//  Created by Joey on 2014. 5. 5..
//  Copyright (c) 2014년 Kakao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

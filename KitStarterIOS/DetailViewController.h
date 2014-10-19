//
//  DetailViewController.h
//  KitStarterIOS
//
//  Created by Anthony MARQUET on 19/10/2014.
//  Copyright (c) 2014 SQLI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


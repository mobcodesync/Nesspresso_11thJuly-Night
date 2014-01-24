//
//  DetailViewController.h
//  MagentoPOC
//
//  Created by Mobiiworld on 24/01/14.
//  Copyright (c) 2014 Mobiiworld. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

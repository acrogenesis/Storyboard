//
//  StoryImageInfoViewController.h
//  Storyboard
//
//  Created by Adrian Rangel on 12/02/14.
//  Copyright (c) 2014 Adrian Rangel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StoryImageInfoViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *alturaLabel;
@property (strong, nonatomic) IBOutlet UILabel *anchoLabel;

//no es clase por eso no lleva asterisco
@property CGFloat alto;
@property CGFloat ancho;


@end

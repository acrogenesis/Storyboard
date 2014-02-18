//
//  StoryPersonalDataViewController.h
//  Storyboard
//
//  Created by Adrian Rangel on 12/02/14.
//  Copyright (c) 2014 Adrian Rangel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StoryPerfilViewController.h"

@interface StoryPersonalDataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *nombreTF;
@property (strong, nonatomic) IBOutlet UITextField *emailTF;

@property (strong, nonatomic) NSString *nombre;

@property (strong, nonatomic) NSString *email;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;

@end

//
//  BCMSignUpView.h
//  Merchant
//
//  Created by User on 11/9/14.
//  Copyright (c) 2014 com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BCMSignUpView;

@protocol BCMSignUpViewDelegate <NSObject>

- (void)signUpViewDidCancel:(BCMSignUpView *)signUpView;
- (void)signUpViewDidSave:(BCMSignUpView *)signUpView;

@end

@interface BCMSignUpView : UIView

@property (weak, nonatomic) id <BCMSignUpViewDelegate> delegate;

@end
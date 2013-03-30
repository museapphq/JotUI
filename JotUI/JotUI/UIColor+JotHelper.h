//
//  UIColor+JotHelper.h
//  JotUI
//
//  Created by Adam Wulf on 1/2/13.
//  Copyright (c) 2013 Adonit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@interface UIColor (JotHelper)

/**
 * provides a nice wrapper around CGColorGetComponents
 * since the CG function may return a different number
 * of components for different colors
 */
-(void) getRGBAComponents:(GLubyte[4])components;

@end

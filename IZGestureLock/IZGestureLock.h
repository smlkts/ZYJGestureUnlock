//
//  IZGestureLock.h
//  IZGestureLock
//
//  Created by 张雁军 on 21/06/2017.
//  Copyright © 2017 张雁军. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface IZGestureLock : UIControl
@property (nonatomic, strong) UIColor *lineColor;///< default [UIColor redColor]
@property (nonatomic, strong) IBInspectable UIImage *normalImage;
@property (nonatomic, strong) UIImage *selectedImage;
@property (nonatomic) CGFloat lineWidth;///< default 6
@property (nonatomic) CGSize itemSize;///< default CGSizeMake(40, 40)
@property (nonatomic) IBInspectable UIEdgeInsets contentInset;///< default UIEdgeInsetsMake(10, 10, 10, 10)
@property (nonatomic, copy) void(^didFinishDrawing)(IZGestureLock *lock, NSString *password);
- (void)clean;
- (void)cleanAfterDuration:(NSTimeInterval)duration completion:(void (^)())completion;
@property (nonatomic, strong) UIImage *highlightedImage;///< 可以用于验证失败短暂显示
@property (nonatomic, strong) UIColor *highlightedLineColor;///< 可以用于验证失败短暂显示
- (void)highlightWithDuration:(NSTimeInterval)duration completion:(void (^)())completion;

@end

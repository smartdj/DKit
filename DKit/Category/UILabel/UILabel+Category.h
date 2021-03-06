//
//  UILabel+Category.h
//  Duwa
//
//  Created by Arthur on 2016/11/22.
//  Copyright © 2016年 miduotek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Category)
- (CGSize)stringRect:(NSAttributedString *)string maxSize:(CGSize)maxSize;
+ (CGSize)sizeLabelToFit:(NSAttributedString *)aString width:(CGFloat)width height:(CGFloat)height;
- (void)setLineSpacing:(CGFloat)lineSpacing;
- (void)setText:(NSString *)text withFontSpacing:(CGFloat)fontSpacing withLineSpacing:(CGFloat)lineSpacing;
@end

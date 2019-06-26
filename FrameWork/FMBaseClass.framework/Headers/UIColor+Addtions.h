//
//  UIColor+Addtions.h
//  FMBaseClass
//
//  Created by FuXinMing on 2019/5/9.
//  Copyright © 2019 FuXinMing. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIColor (Addtions)
+(UIColor *)RGBCOLOR:(float)r g:(float)g b:(float)b;
+(UIColor *)RGBCOLOR:(float)r g:(float)g b:(float)b a:(float)a;
+(UIColor *)ColorFromHexRGB:(NSInteger)hexColor;
+(UIColor *)ColorFromHexRGB:(NSInteger)hexColor a:(float)a;
/**
 *  @brief 将16进制色值转成RGB值
 *
 *  @param hexColor 16进制色值
 *
 *  @return UIColor
 */
+(UIColor *)colorWithHex:(long)hexColor;

/**
 *  @brief 将16进制色值转成RGB值
 *
 *  @param hexColor 16进制色值
 *  @param alpha 透明度 0～1之间的浮点数
 *
 *  @return UIColor
 */
+(UIColor *)colorWithHex:(long)hexColor alpha:(float)alpha ;

/**
 *  @brief  获取随机颜色
 *
 *  @return 随机颜色
 */
+(UIColor *)randomColor;

/**
 *  @brief  字符串转化为颜色
 *
 *  @param string 字符串
 *
 *  @return 颜色
 */
+(UIColor *)colorFormString:(NSString *)string;
@end


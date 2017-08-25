//
//  CircleProgressView.h
//  AnimationDemo
//
//  Created by dengtao on 2017/6/23.
//  Copyright © 2017年 JingXian. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CircleIncreaseModel) {
    CircleIncreaseSameTime      = 0,    // 同等时间
    CircleIncreaseByProgress    = 1,    // 根据进度决定动画时间
};

@interface CircleProgressView : UIView

//图形定制
@property (nonatomic, strong) UIColor *pathBackColor;   /**<线条背景色*/
@property (nonatomic, strong) UIColor *pathFillColor;   /**<线条填充色*/
@property (nonatomic, strong) UIImage *pointImage;      /**<小圆点图片*/

//角度相关
@property (nonatomic, assign) CGFloat startAngle;       /**<起点角度。角度从水平右侧开始为0，顺时针为增加角度。直接传度数 如-90 */
@property (nonatomic, assign) CGFloat reduceValue;      /**<减少的角度 直接传度数 如30*/
@property (nonatomic, assign) CGFloat strokeWidth;      /**<线宽*/

@property (nonatomic, assign) BOOL showPoint;           /**<是否显示小圆点*/
@property (nonatomic, assign) BOOL showProgressText;    /**<是否显示文字*/
@property (nonatomic, assign) BOOL increaseFromLast;    /**<是否从上次数值开始动画，默认为NO*/
@property (nonatomic, assign) BOOL notAnimated;         /**<不加动画，默认为NO*/
@property (nonatomic, assign) BOOL forceRefresh;        /**<set的progress等于上次时是否仍刷新，默认为NO*/

//动画模式
@property (nonatomic, assign) CircleIncreaseModel animationModel;/**<动画模式*/

//进度
@property (nonatomic, assign) CGFloat progress;         /**<进度 0-1 */


- (instancetype)initWithFrame:(CGRect)frame             //初始化 坐标
                pathBackColor:(UIColor *)pathBackColor  //线条背景色
                pathFillColor:(UIColor *)pathFillColor  //填充色
                   startAngle:(CGFloat)startAngle       //起始角度
                  strokeWidth:(CGFloat)strokeWidth;     // 线宽


@end


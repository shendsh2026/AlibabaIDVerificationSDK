//
//  IDVTimePickerView.h
//  AliyunIdentityUtils
//
//  Created by 顾鹿 on 2025/3/11.
//  Copyright © 2025 aliyun.com. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^DateSelectedBlock)(NSInteger year, NSInteger month, NSInteger day);
typedef void(^DateCancelBlock)(void);

@interface IDVTimePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

// 初始化方法（默认显示当前日期，年份范围：当前年份前后各10年）
- (instancetype)initWithStartYear:(NSInteger)startYear
                         endYear:(NSInteger)endYear;

// 显示日期选择器
- (void)showInView:(UIView *)view
    selectedBlock:(DateSelectedBlock)selectedBlock
     cancelBlock:(DateCancelBlock)cancelBlock;

// 设置默认日期（可选）
- (void)setDefaultDateWithYear:(NSInteger)year
                         month:(NSInteger)month
                           day:(NSInteger)day;


@end




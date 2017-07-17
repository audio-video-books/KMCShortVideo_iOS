//
//  NemoFilterCell.h
//  Nemo
//
//  Created by ksyun on 17/4/20.
//  Copyright © 2017年 com.ksyun. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol buttonCollectionCellDelegate <NSObject>

- (void)addAssetClicked:(UICollectionViewCell*)cell;

@end

@interface buttonCollectionCell : UICollectionViewCell

@property (nonatomic, strong) UIButton * addButton;

@property(nonatomic,weak) id<buttonCollectionCellDelegate> delegate;

@end

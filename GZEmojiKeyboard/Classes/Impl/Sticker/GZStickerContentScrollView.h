//
//  UIStickerContentScrollView.h
//  MobileFramework
//
//  Created by zhaoy on 13/10/15.
//  Copyright © 2015 com.gz. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GZExpandableInputView;

@protocol GZStickerContentScrollViewControl <NSObject>

- (void)onScrolledToNewPackage:(int)index;

- (void)adjustPanelPositionAtIndex:(int)index;

@end

@interface GZStickerContentScrollView : UICollectionView

@property(weak, nonatomic)UIPageControl* pageControl;
@property(weak, nonatomic)id<GZStickerContentScrollViewControl> scrollContentDelegate;

- (void)configAccessoryInput:(GZExpandableInputView*)input;

- (void)updateContentPanel:(NSArray*)stickerPackages;

@end
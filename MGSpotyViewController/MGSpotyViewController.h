//
//  MGSpotyViewController.h
//  MGSpotyView
//
//  Created by Matteo Gobbi on 25/06/2014.
//  Copyright (c) 2014 Matteo Gobbi. All rights reserved.
//

@import UIKit;

#import "MGSpotyViewControllerDataSource.h"
#import "MGSpotyViewControllerDelegate.h"


extern CGFloat const kMGOffsetEffects;
extern CGFloat const kMGOffsetBlurEffect;


@interface MGSpotyViewController : UIViewController

/**
 *  Overview object
 */
@property (nonatomic, strong) UIView *overView;

/**
 *  Main image view
 */
@property (nonatomic, strong) UIImageView *mainImageView;

/**
 *  The MGSpotyViewController dataSource. This protocol wraps the tableview datasource
 */
@property (nonatomic, weak) id <MGSpotyViewControllerDataSource> dataSource;

/**
 *  The MGSpotyViewController delegate. This protocol wraps the tableview delegate
 */
@property (nonatomic, weak) id <MGSpotyViewControllerDelegate> delegate;

/**
 *  Initialize method for MGSpotyViewController
 *
 *  @param image UIImage you want to use
 *
 *  @return MGSpotyViewController
 */
- (instancetype)initWithMainImage:(UIImage *)image;

/**
 *  Set an UIImage for the mainImageView
 *
 *  @param image UIImage you want to use
 */
- (void)setMainImage:(UIImage *)image;

@end
//
//  itemDetailViewController.h
//  FinalSketch
//
//  Created by xiaoyifan on 2/27/15.
//  Copyright (c) 2015 xiaoyifan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface itemDetailViewController : UIViewController<UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *mainScrollView;

@property (weak, nonatomic) IBOutlet UIImageView *itemImage;

@property (weak, nonatomic) IBOutlet UILabel *itemTitle;

@property (weak, nonatomic) IBOutlet UILabel *itemDescription;

@property (weak, nonatomic) IBOutlet UIButton *calendarButton;

@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@property (nonatomic, retain) IBOutlet MKMapView *mapView;

@end
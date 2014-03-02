//
//  TCViewController.h
//  TableCollapse
//
//  Created by Ryan Heitner on 02/03/2014.
//  Copyright (c) 2014 Ryan Heitner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JKExpandTableView.h"

@interface TCViewController : UIViewController <JKExpandTableViewDelegate,JKExpandTableViewDataSource>
@property(nonatomic,weak) IBOutlet JKExpandTableView * expandTableView;
@property(nonatomic,strong) NSMutableArray * dataModelArray;

@end

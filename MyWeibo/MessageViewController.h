//
//  MessageViewController.h
//  MyWeibo
//
//  Created by DLS-MACMini on 16/2/26.
//  Copyright © 2016年 DLS-MACMini. All rights reserved.
//

#import "BaseViewController.h"

@interface MessageViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>{

    UITableView *_weiboTableView;
    NSMutableArray *_weibos;
}




@end

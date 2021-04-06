//
//  FancyNativeExpressAdView.h
//  FancyAdSDK
//
//  Created by admin on 2021/3/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FancyNativeExpressAdView : UIView

@property(nonatomic,strong)UIViewController *currentViewController;

- (void)render;

@end

NS_ASSUME_NONNULL_END

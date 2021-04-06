//
//  FancySplashAd.h
//  FancyAdSDK
//
//  Created by admin on 2021/3/4.
//

#import <UIKit/UIKit.h>
@class FancySplashAd;

NS_ASSUME_NONNULL_BEGIN

@protocol FancySplashAdDelegate <NSObject>

@optional
/// 开屏加载成功
- (void)fancy_splashAdDidLoad:(FancySplashAd *)splashAd;

/// 开屏加载失败
- (void)fancy_splashAd:(FancySplashAd *)splashAd didFailWithError:(NSError * _Nullable)error;

/// 开屏广告被点击了
- (void)fancy_splashAdDidClick:(FancySplashAd *)splashAd;

/// 开屏广告关闭了
- (void)fancy_splashAdDidClose:(FancySplashAd *)splashAd;

/// 开屏广告详情页面关闭的回调
- (void)fancy_splashAdDetailDidClosed:(FancySplashAd *)splashAd;

///  开屏视频广告播放失败  针对于视频广告播放
- (void)fancy_splashAd:(FancySplashAd *)splashAd playFialWithError:(NSError *)error;

///  开屏广告将要展示
- (void)fancy_splashAdWillVisible:(FancySplashAd *)splashAd;

@end

@interface FancySplashAd : NSObject

/// 广告id 只读，开发者不允许修改
@property(nonatomic,copy,readonly)NSString *slotId;

/// 闪屏广告代理
@property(nonatomic,weak)id<FancySplashAdDelegate> delegate;

/// bottom view 
@property(nonatomic,strong)UIView *buttomView;

/// 当前的控制器 栈顶控制器
@property(nonatomic,weak)UIViewController *currentViewController;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;
/// 初始化
/// @param slotId 广告id
- (instancetype)initWithSlotId:(NSString *)slotId NS_DESIGNATED_INITIALIZER;

/// 加载广告
- (void)loadAd;


@end

NS_ASSUME_NONNULL_END

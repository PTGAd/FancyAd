//
//  FancyNativeExpressAd.h
//  Masonry
//
//  Created by admin on 2021/3/12.
//

#import <UIKit/UIKit.h>

@class FancyNativeExpressAd;
@class FancyNativeExpressAdView;

NS_ASSUME_NONNULL_BEGIN

@protocol FancyNativeExpressAdDelegate <NSObject>
@optional;

/// 原生模版广告获取成功
/// @param nativeExpressAd 广告对象
/// @param ads 广告数组 一般只会有一条广告数据 使用数组预留扩展
- (void)fancy_nativeExpressAdSuccessToLoad:(FancyNativeExpressAd *)nativeExpressAd ads:(NSArray<__kindof FancyNativeExpressAdView *> *)ads;

/// 原生模版广告获取失败
/// @param nativeExpressAd 广告对象
/// @param error 错误信息
- (void)fancy_nativeExpressAdFailToLoad:(FancyNativeExpressAd *)nativeExpressAd error:(NSError *_Nullable)error;

/// 原生模版渲染成功
/// @param nativeExpressAdView 渲染成功的模板广告视图
- (void)fancy_nativeExpressAdRenderSuccess:(FancyNativeExpressAdView *)nativeExpressAdView;

/// 原生模版渲染失败
/// @param nativeExpressAdView 渲染失败的模板广告视图
/// @param error 渲染过程中的错误
- (void)fancy_nativeExpressAdRenderFail:(FancyNativeExpressAdView *)nativeExpressAdView error:(NSError *_Nullable)error;

/// 原生模板将要显示
/// @param nativeExpressAdView 要显示的模板广告视图
- (void)fancy_nativeExpressAdWillShow:(FancyNativeExpressAdView *)nativeExpressAdView;

/// 原生模板将被点击了
/// @param nativeExpressAdView  被点击的模板广告视图
- (void)fancy_nativeExpressAdDidClick:(FancyNativeExpressAdView *)nativeExpressAdView;

///  原生模板广告被关闭了
/// @param nativeExpressAdView 要关闭的模板广告视图
- (void)fancy_nativeExpressAdViewClosed:(FancyNativeExpressAdView *)nativeExpressAdView;

/// 原生模板广告将要展示详情页
/// @param nativeExpressAdView  广告视图
- (void)fancy_nativeExpressAdWillPresentScreen:(FancyNativeExpressAdView *)nativeExpressAdView;

/// 原生模板广告将要关闭详情页
/// @param nativeExpressAdView  广告视图
- (void)fancy_nativeExpressAdVDidCloseOtherController:(FancyNativeExpressAdView *)nativeExpressAdView;

@end

@interface FancyNativeExpressAd : NSObject

/// 当前控制器
@property(nonatomic,weak)UIViewController *currentViewController;

/// 广告id 只读，开发者不允许修改
@property(nonatomic,copy,readonly)NSString *slotId;

/// delegate
@property(nonatomic,weak)id<FancyNativeExpressAdDelegate> delegate;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;
/// 初始化
/// @param slotId 广告id
/// @adSize 广告大小 传入宽度，高度传0  自适应高度
- (instancetype)initWithSlotId:(NSString *)slotId adSize:(CGSize)adSize NS_DESIGNATED_INITIALIZER;

/// 加载广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END

//
//  FancyBannerAd.h
//  FancyAdSDK
//
//  Created by admin on 2021/3/12.
//

#import <UIKit/UIKit.h>
@class FancyNativeExpressBannerAd;

NS_ASSUME_NONNULL_BEGIN

@protocol FancyNativeExpressBannerAdDelegate <NSObject>
@optional
/// 广告加载成功
- (void)fancy_nativeExpressBannerAdDidLoad:(FancyNativeExpressBannerAd *)bannerAd;

/// 广告加载失败
- (void)fancy_nativeExpressBannerAd:(FancyNativeExpressBannerAd *)bannerAd didLoadFailWithError:(NSError *_Nullable)error;

/// banner广告渲染成功
/// @param nativeExpressAd 渲染成功的模板广告
- (void)fancy_nativeExpressBannerAdRenderSuccess:(FancyNativeExpressBannerAd *)nativeExpressAd adSize:(CGSize)size;

///  banner广告渲染失败
/// @param nativeExpressAd 渲染失败的模板广告
/// @param error 渲染过程中的错误
- (void)fancy_nativeExpressBannerAdRenderFail:(FancyNativeExpressBannerAd *)nativeExpressAd error:(NSError *_Nullable)error;

/// 广告将要曝光
- (void)fancy_nativeExpressBannerAdWillBecomVisible:(FancyNativeExpressBannerAd *)bannerAd;

/// 广告被点击
- (void)fancy_nativeExpressBannerAdDidClick:(FancyNativeExpressBannerAd *)bannerAd;
 
/// 广告被关闭
- (void)fancy_nativeExpressBannerAdClosed:(FancyNativeExpressBannerAd *)bannerAd;

/// 原生模板广告将要展示详情页
/// @param bannerAd  广告
- (void)fancy_nativeExpressBannerAdWillPresentScreen:(FancyNativeExpressBannerAd *)bannerAd;

/// 广告详情页给关闭
- (void)fancy_nativeExpressBannerAdViewDidCloseOtherController:(FancyNativeExpressBannerAd *)bannerAd;

@end

@interface FancyNativeExpressBannerAd : NSObject


/// 当前控制器
@property(nonatomic,weak)UIViewController *currentViewController;

/// 广告id 只读，开发者不允许修改
@property(nonatomic,copy,readonly)NSString *slotId;

/// delegate
@property(nonatomic,weak)id<FancyNativeExpressBannerAdDelegate> delegate;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;
/// 初始化
/// @param slotId 广告id
/// @adSize 广告大小 传入宽度，高度传0  自适应高度
- (instancetype)initWithSlotId:(NSString *)slotId adSize:(CGSize)adSize NS_DESIGNATED_INITIALIZER;

/// 加载广告
- (void)loadAd;

/// 展示广告
/// @param view 展示广告的视图
/// @param frame 广告位置
- (void)showAdFromView:(UIView *)view frame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END

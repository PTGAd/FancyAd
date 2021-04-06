//
//  FancyAdConfig.h
//  FancyAdSDK
//
//  Created by admin on 2021/3/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface FancyUser : NSObject

// 媒体端用户id
@property(nonatomic,copy)NSString *userId;
// 性别（M: 男，F: 女，缺省：未知）
@property(nonatomic,copy)NSString *gender;
/// 年龄
@property(nonatomic,assign)NSInteger age;
/// 兴趣标签，标签体系需提前联系AdxExchange运营
@property(nonatomic,strong)NSArray<NSString *> *audience_tag;

@end

@interface FancySDKManager : NSObject

@property(class,nonatomic,strong,readonly)FancyUser *user;
@property(class,nonatomic,copy,readonly)NSString *baseURL;
@property(class,nonatomic,copy,readonly)NSString *idfa;

@property(class,nonatomic,assign,readonly)BOOL initSuccess;
@property(class,nonatomic,copy,readonly)NSString *sdkVersion;

/// 请求广告前调用
/// @param baseURL 广告请求的域名 必须传递
/// @param user 用户画像信息
/// @param idfa 广告唯一标识
+ (void)setBaseURL:(NSString *)baseURL user:(FancyUser *)user idfa:(NSString *)idfa completion:(void(^)(NSError * error))completion;;

@end

NS_ASSUME_NONNULL_END

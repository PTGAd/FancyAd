//
//  FancyAdConfig.h
//  FancyAdSDK
//
//  Created by admin on 2021/3/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FancySDKManager : NSObject

@property(class,nonatomic,copy,readonly)NSString *baseURL;

@property(class,nonatomic,assign,readonly)BOOL initSuccess;
@property(class,nonatomic,copy,readonly)NSString *sdkVersion;

/// 请求广告前调用
/// @param baseURL 广告请求的域名 必须传递
+ (void)setBaseURL:(NSString *)baseURL completion:(void(^)(NSError * error))completion;;

@end

NS_ASSUME_NONNULL_END

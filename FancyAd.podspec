#
#  Be sure to run `pod spec lint PTGAdFramework.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "FancyAd"
  spec.version      = "1.1.7"
  spec.summary      = "A short description of FancyAd."


  spec.description  = <<-DESC
    PTGAdFramework provides Union ADs which include native、banner、feed、splash、RewardVideo etc.
  DESC

  spec.homepage     = "https://github.com/PTGAd/FancyAd"

  spec.license      = "MIT"


  spec.author             = { "fancy" => "ptg_all@fancydigital.com.cn" }

  spec.source       = { :git => "https://github.com/PTGAd/FancyAd.git", :tag => "#{spec.version }" }


  spec.platform     = :ios, "9.0"
  spec.frameworks = 'UIKit', 'MapKit', 'WebKit', 'MediaPlayer', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate'
  spec.libraries = 'c++', 'resolv', 'z', 'sqlite3'
  spec.vendored_frameworks =  'Frameworks/FancyAdSDK.framework'
    
  spec.resources = "Frameworks/FancyAdSDK.bundle"

  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  spec.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }

end

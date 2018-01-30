Pod::Spec.new do |s|
  s.name         = "yf_AdjustPurchase"
  s.version      = "1.0.0"
  s.summary      = "yf_AdjustPurchase"
  s.description  = "yf_AdjustPurchase_SDK"
  s.homepage     = "https://github.com/leonard-li/game7_libs"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.source       = { :git => "https://github.com/leonard-li/game7_libs.git", :tag => v-release-106 } 
  s.platform = :ios,'8.0'
  s.source_files = 'AdjustPurchase/AdjustPurchaseSDK.framework/Headers/*.{h}' 
  s.public_header_files = 'AdjustPurchase/AdjustPurchaseSDK.framework/Headers/**/*.{h}'
  s.frameworks   = 'UIKit','Foundation'
end

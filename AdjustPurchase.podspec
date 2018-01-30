Pod::Spec.new do |s|
  s.name         = "yf_AdjustPurchase"
  s.version      = "1.0.0"
  s.summary      = "yf_AdjustPurchase"
  s.description  = "yf_AdjustPurchase_SDK"
  s.homepage     = "https://github.com/leonard-li/game7_libs"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "liuyaqiang" => "344257448@qq.com" }
  s.source       = { :git => "https://github.com/leonard-li/game7_libs.git", :tag =>v-release-106 }
 # s.resource     = 'FineSDK/PluginSDKResources.bundle'
  s.platform = :ios,'8.0'
 # s.vendored_frameworks = 'FineSDK/FineSDK.framework'
  s.source_files = 'AdjustPurchase/AdjustPurchase.framework/Headers/*.{h}' 
  s.public_header_files = 'AdjustPurchase/AdjustPurchase.framework/Headers/**/*.{h}'
  s.frameworks   = 'UIKit','Foundation'
end

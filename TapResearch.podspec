Pod::Spec.new do |s|
  s.name             = 'TapResearch'
  s.version          = '2.4.2'
  s.summary          = 'TapResearch IOS SDK'

  s.description      = <<-DESC
TapResearch IOS SDK, to learn more checkout: https://supply-docs.tapresearch.com/docs/ios-integration/
	DESC

  s.homepage         = 'https://www.tapresearch.com'
  s.license          = { :type => 'Closed Source' }
  s.author           = { 'Jeroen Verbeek' => 'jeroen@tapresarch.com' }
  s.source           = { :git => 'https://github.com/TapResearch/TapResearch-iOS-SDK.git', :tag => 'v2.4.2' }

  s.ios.deployment_target = '10.0'
  s.ios.vendored_frameworks = 'TapResearchSDK.xcframework'
  s.frameworks = 'UIKit', 'MapKit', 'Foundation', 'SystemConfiguration', 'MobileCoreServices', 'AdSupport', 'Security'
end

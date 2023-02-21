#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef TAPRESEARCHSDK_SWIFT_H
#define TAPRESEARCHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#import <TapResearchSDK/TapResearchSDK.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TapResearchSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSURLSession;
@class NSString;

SWIFT_CLASS("_TtC14TapResearchSDK9Constants")
@interface Constants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Constants * _Nonnull shared;)
+ (Constants * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NSURLSession * _Null_unspecified urlSession;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRBaseURL;)
+ (NSString * _Nonnull)kTRBaseURL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRVersion;)
+ (NSString * _Nonnull)kTRVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPlatform;)
+ (NSString * _Nonnull)kTRPlatform SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAPIVersion;)
+ (NSString * _Nonnull)kTRAPIVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRErrorDomain;)
+ (NSString * _Nonnull)kTRErrorDomain SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)idfa SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostVersions;)
+ (NSString * _Nonnull)kTRPostVersions SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRGetOffers;)
+ (NSString * _Nonnull)kTRGetOffers SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostPlayers;)
+ (NSString * _Nonnull)kTRPostPlayers SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostSurveyURL;)
+ (NSString * _Nonnull)kTRPostSurveyURL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRGetCampaignCompletes;)
+ (NSString * _Nonnull)kTRGetCampaignCompletes SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostRewardsRedeemed;)
+ (NSString * _Nonnull)kTRPostRewardsRedeemed SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostAppImpressions;)
+ (NSString * _Nonnull)kTRPostAppImpressions SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPostInterstitialEvents;)
+ (NSString * _Nonnull)kTRPostInterstitialEvents SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSTimeInterval kNetworkTimeoutSeconds;)
+ (NSTimeInterval)kNetworkTimeoutSeconds SWIFT_WARN_UNUSED_RESULT;
+ (void)setUrlResponseMocks:(NSArray<NSDictionary *> * _Nonnull)dictionaries;
+ (void)setUrlPathMocks:(NSArray<NSDictionary *> * _Nonnull)dictionaries;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRCPIdentifier;)
+ (NSString * _Nonnull)kTRCPIdentifier SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRCryptoKey;)
+ (NSString * _Nonnull)kTRCryptoKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRShouldSleepHeader;)
+ (NSString * _Nonnull)kTRShouldSleepHeader SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRMessageOfferEntryKey;)
+ (NSString * _Nonnull)kTRMessageOfferEntryKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRMessageNoOfferKey;)
+ (NSString * _Nonnull)kTRMessageNoOfferKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRMessageAbandonKey;)
+ (NSString * _Nonnull)kTRMessageAbandonKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAbandonButtonTextKey;)
+ (NSString * _Nonnull)kTRAbandonButtonTextKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRCloseButtonTextKey;)
+ (NSString * _Nonnull)kTRCloseButtonTextKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAbandonAlertTitleKey;)
+ (NSString * _Nonnull)kTRAbandonAlertTitleKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAbandonAlertContinueKey;)
+ (NSString * _Nonnull)kTRAbandonAlertContinueKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAbandonAlertCancelKey;)
+ (NSString * _Nonnull)kTRAbandonAlertCancelKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRMessageSDKVersionNoLongerSupported;)
+ (NSString * _Nonnull)kTRMessageSDKVersionNoLongerSupported SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRDisplayDimensions;)
+ (NSString * _Nonnull)kTRDisplayDimensions SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTROrientationKey;)
+ (NSString * _Nonnull)kTROrientationKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRScreenDensityKey;)
+ (NSString * _Nonnull)kTRScreenDensityKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRScreenPixelSizeKey;)
+ (NSString * _Nonnull)kTRScreenPixelSizeKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRConnectionTypeKey;)
+ (NSString * _Nonnull)kTRConnectionTypeKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRCarrierKey;)
+ (NSString * _Nonnull)kTRCarrierKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPlatformKey;)
+ (NSString * _Nonnull)kTRPlatformKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTROsVersionKey;)
+ (NSString * _Nonnull)kTROsVersionKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRDeviceNameKey;)
+ (NSString * _Nonnull)kTRDeviceNameKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTVersionKey;)
+ (NSString * _Nonnull)kTVersionKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRAppIdKey;)
+ (NSString * _Nonnull)kTRAppIdKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRTriggeredAtKey;)
+ (NSString * _Nonnull)kTRTriggeredAtKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRPlayerEarnedRewardNotification;)
+ (NSString * _Nonnull)kTRPlayerEarnedRewardNotification SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger kTRSessionMonitoringInterval;)
+ (NSInteger)kTRSessionMonitoringInterval SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger kTRSessionLoginThreshold;)
+ (NSInteger)kTRSessionLoginThreshold SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger kTRRequestInterval;)
+ (NSInteger)kTRRequestInterval SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kValueNotAvailableString;)
+ (NSString * _Nonnull)kValueNotAvailableString SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kTRDefaultIdfa;)
+ (NSString * _Nonnull)kTRDefaultIdfa SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double kTRDefaultFastPassPollingTime;)
+ (double)kTRDefaultFastPassPollingTime SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double kTRDefaultStandardPollingTime;)
+ (double)kTRDefaultStandardPollingTime SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, Environment, open) {
  EnvironmentDevelopment = 0,
  EnvironmentYavin = 1,
  EnvironmentJedha = 2,
  EnvironmentProduction = 3,
};

typedef SWIFT_ENUM(NSInteger, HTTPParamsDataType, open) {
  HTTPParamsDataTypeNone = 0,
  HTTPParamsDataTypeJson = 1,
  HTTPParamsDataTypeQuery = 2,
};


SWIFT_CLASS("_TtC14TapResearchSDK8LogEvent")
@interface LogEvent : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, LogEventType, open) {
  LogEventTypeCrash = 0,
  LogEventTypeUser = 1,
  LogEventTypeWebFailedPreload = 4,
  LogEventTypeWebFailedload = 5,
};

enum PlatformType : NSInteger;
enum LogLevel : NSInteger;
enum LogType : NSInteger;
@class TRWebEvent;

SWIFT_CLASS("_TtC14TapResearchSDK9LogHelper")
@interface LogHelper : NSObject
+ (void)configureWithPlatform:(enum PlatformType)platform appId:(NSString * _Nonnull)appId logLevel:(enum LogLevel)logLevel apiToken:(NSString * _Nonnull)apiToken additionalHeaders:(NSDictionary<NSString *, NSString *> * _Nullable)additionalHeaders;
+ (void)setLogLevelTo:(NSInteger)logLevel;
+ (void)log:(enum LogLevel)level eventType:(enum LogEventType)eventType category:(enum LogType)category message:(NSString * _Nonnull)message additionalHeaders:(NSDictionary<NSString *, NSString *> * _Nullable)additionalHeaders;
+ (void)logWeb:(enum LogLevel)level eventType:(enum LogEventType)eventType webEvent:(TRWebEvent * _Nonnull)webEvent;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelHalt = -1,
  LogLevelNone = 0,
  LogLevelDebug = 1,
  LogLevelInfo = 2,
  LogLevelWarning = 3,
  LogLevelError = 4,
};

typedef SWIFT_ENUM(NSInteger, LogType, open) {
  LogTypeGeneral = 0,
  LogTypeNetwork = 1,
  LogTypeLifecycle = 2,
  LogTypeWeb = 3,
};


typedef SWIFT_ENUM(NSInteger, PlatformType, open) {
  PlatformTypeIos = 0,
  PlatformTypeTvOS = 1,
};

@class TRPlacement;
@class TROffer;
@protocol TapResearchEventDelegate;
@protocol TapResearchSurveyDelegate;
@class TRPlacementCustomParameterList;
@class NSError;

/// <hr/>
/// <hr/>
SWIFT_CLASS("_TtC14TapResearchSDK16TREventPresenter")
@interface TREventPresenter : NSObject
/// <hr/>
+ (NSError * _Nullable)displayEvent:(TRPlacement * _Nonnull)placement offer:(TROffer * _Nonnull)offer eventId:(NSString * _Nullable)eventId playerIdentifier:(NSString * _Nonnull)playerIdentifier displayDelegate:(id <TapResearchEventDelegate> _Nullable)displayDelegate surveyDelegate:(id <TapResearchSurveyDelegate> _Nullable)surveyDelegate closeButtonLocation:(TRDisplayEventExitButtonLocation)closeButtonLocation transitionStyle:(TRDisplayEventTransitionType)transitionStyle customParameters:(TRPlacementCustomParameterList * _Nonnull)customParameters SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TapResearchSDK8TRLogger")
@interface TRLogger : NSObject
+ (void)setLogLevelTo:(enum LogLevel)logLevel;
+ (void)setEnvironmentTo:(enum Environment)environment;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIViewController;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14TapResearchSDK22TRNavigationController")
@interface TRNavigationController : UINavigationController
@property (nonatomic, readonly) UIInterfaceOrientation preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;
@class NSURLRequest;

/// <hr/>
/// <hr/>
SWIFT_CLASS("_TtC14TapResearchSDK17TRRequestProvider")
@interface TRRequestProvider : NSObject
/// <hr/>
+ (BOOL)shouldMockResponseFor:(NSString * _Nonnull)realPath SWIFT_WARN_UNUSED_RESULT;
/// <hr/>
+ (NSData * _Nullable)urlMockResponseFor:(NSString * _Nonnull)realPath SWIFT_WARN_UNUSED_RESULT;
/// <hr/>
+ (NSURLRequest * _Nullable)requestWithMethod:(NSString * _Nonnull)method url:(NSString * _Nonnull)url headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers paramsType:(enum HTTPParamsDataType)paramsType params:(NSDictionary<NSString *, id> * _Nullable)params SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TRPlayer;
@class TRAppSession;
@class TRReward;

SWIFT_CLASS("_TtC14TapResearchSDK7TRStore")
@interface TRStore : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) TRPlayer * _Nullable player;)
+ (TRPlayer * _Nullable)player SWIFT_WARN_UNUSED_RESULT;
+ (void)setPlayer:(TRPlayer * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) TRAppSession * _Nullable appSession;)
+ (TRAppSession * _Nullable)appSession SWIFT_WARN_UNUSED_RESULT;
+ (void)setAppSession:(TRAppSession * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isServerToServer;)
+ (BOOL)isServerToServer SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsServerToServer:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSArray<TRReward *> * _Nullable rewards;)
+ (NSArray<TRReward *> * _Nullable)rewards SWIFT_WARN_UNUSED_RESULT;
+ (void)setRewards:(NSArray<TRReward *> * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable userIdentifier;)
+ (NSString * _Nullable)userIdentifier SWIFT_WARN_UNUSED_RESULT;
+ (void)setUserIdentifier:(NSString * _Nullable)newValue;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TapResearchSDK10TRWebEvent")
@interface TRWebEvent : NSObject
- (nonnull instancetype)initWithError:(NSError * _Nonnull)error startingUrlString:(NSString * _Nonnull)startingUrlString webSourceUrl:(NSString * _Nullable)webSourceUrl cpIdentifier:(NSString * _Nullable)cpIdentifier tabIndex:(NSInteger)tabIndex isProvisional:(BOOL)isProvisional OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

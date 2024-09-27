/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleObjCpp
 *
 * We create an umbrella header (and corresponding implementation) here since
 * Cxx compilation in BUCK has a limitation: source-code producing genrule()s
 * must have a single output. More files => more genrule()s => slower builds.
 */

#ifndef __cplusplus
#error This file must be compiled as Obj-C++. If you are importing it, you must change your file extension to .mm.
#endif

// Avoid multiple includes of rnsvg symbols
#ifndef rnsvg_H
#define rnsvg_H

#import <Foundation/Foundation.h>
#import <RCTRequired/RCTRequired.h>
#import <RCTTypeSafety/RCTConvertHelpers.h>
#import <RCTTypeSafety/RCTTypedModuleConstants.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTCxxConvert.h>
#import <React/RCTManagedPointer.h>
#import <ReactCommon/RCTTurboModule.h>
#import <optional>
#import <vector>


@protocol NativeSvgRenderableModuleSpec <RCTBridgeModule, RCTTurboModule>

- (NSNumber *)isPointInFill:(NSNumber *)tag
                    options:(NSDictionary *)options;
- (NSNumber *)isPointInStroke:(NSNumber *)tag
                      options:(NSDictionary *)options;
- (NSNumber *)getTotalLength:(NSNumber *)tag;
- (NSDictionary *)getPointAtLength:(NSNumber *)tag
                           options:(NSDictionary *)options;
- (NSDictionary *)getBBox:(NSNumber *)tag
                  options:(NSDictionary *)options;
- (NSDictionary *)getCTM:(NSNumber *)tag;
- (NSDictionary *)getScreenCTM:(NSNumber *)tag;
- (void)getRawResource:(NSString *)name
               resolve:(RCTPromiseResolveBlock)resolve
                reject:(RCTPromiseRejectBlock)reject;

@end
namespace facebook::react {
  /**
   * ObjC++ class for module 'NativeSvgRenderableModule'
   */
  class JSI_EXPORT NativeSvgRenderableModuleSpecJSI : public ObjCTurboModule {
  public:
    NativeSvgRenderableModuleSpecJSI(const ObjCTurboModule::InitParams &params);
  };
} // namespace facebook::react

@protocol NativeSvgViewModuleSpec <RCTBridgeModule, RCTTurboModule>

- (void)toDataURL:(NSNumber *)tag
          options:(NSDictionary *)options
         callback:(RCTResponseSenderBlock)callback;

@end
namespace facebook::react {
  /**
   * ObjC++ class for module 'NativeSvgViewModule'
   */
  class JSI_EXPORT NativeSvgViewModuleSpecJSI : public ObjCTurboModule {
  public:
    NativeSvgViewModuleSpecJSI(const ObjCTurboModule::InitParams &params);
  };
} // namespace facebook::react


#endif // rnsvg_H

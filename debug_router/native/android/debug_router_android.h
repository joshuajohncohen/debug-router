// Copyright 2024 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.

#ifndef DEBUGROUTER_NATIVE_ANDROID_DEBUG_ROUTER_ANDROID_H_
#define DEBUGROUTER_NATIVE_ANDROID_DEBUG_ROUTER_ANDROID_H_

#include <jni.h>

namespace debugrouter {
namespace android {

class DebugRouterAndroid {
 public:
  explicit DebugRouterAndroid();
  ~DebugRouterAndroid();
  static bool RegisterJNIUtils(JNIEnv *env);
};

}  // namespace android
}  // namespace debugrouter

#endif  // DEBUGROUTER_NATIVE_ANDROID_DEBUG_ROUTER_ANDROID_H_

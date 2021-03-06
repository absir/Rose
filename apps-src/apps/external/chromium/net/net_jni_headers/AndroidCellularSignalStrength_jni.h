// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/chromium/net/AndroidCellularSignalStrength

#ifndef org_chromium_net_AndroidCellularSignalStrength_JNI
#define org_chromium_net_AndroidCellularSignalStrength_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_net_AndroidCellularSignalStrength[];
const char kClassPath_org_chromium_net_AndroidCellularSignalStrength[] =
    "org/chromium/net/AndroidCellularSignalStrength";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_chromium_net_AndroidCellularSignalStrength_clazz(nullptr);
#ifndef org_chromium_net_AndroidCellularSignalStrength_clazz_defined
#define org_chromium_net_AndroidCellularSignalStrength_clazz_defined
inline jclass org_chromium_net_AndroidCellularSignalStrength_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_AndroidCellularSignalStrength,
      &g_org_chromium_net_AndroidCellularSignalStrength_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace net {
namespace android {


static std::atomic<jmethodID>
    g_org_chromium_net_AndroidCellularSignalStrength_getSignalStrengthLevel(nullptr);
static jint Java_AndroidCellularSignalStrength_getSignalStrengthLevel(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidCellularSignalStrength_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidCellularSignalStrength_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getSignalStrengthLevel",
          "()I",
          &g_org_chromium_net_AndroidCellularSignalStrength_getSignalStrengthLevel);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id);
  return ret;
}

}  // namespace android
}  // namespace net

#endif  // org_chromium_net_AndroidCellularSignalStrength_JNI

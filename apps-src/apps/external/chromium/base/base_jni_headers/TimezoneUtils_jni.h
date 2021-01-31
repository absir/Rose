// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/chromium/base/TimezoneUtils

#ifndef org_chromium_base_TimezoneUtils_JNI
#define org_chromium_base_TimezoneUtils_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_TimezoneUtils[];
const char kClassPath_org_chromium_base_TimezoneUtils[] = "org/chromium/base/TimezoneUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_base_TimezoneUtils_clazz(nullptr);
#ifndef org_chromium_base_TimezoneUtils_clazz_defined
#define org_chromium_base_TimezoneUtils_clazz_defined
inline jclass org_chromium_base_TimezoneUtils_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_TimezoneUtils,
      &g_org_chromium_base_TimezoneUtils_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {


static std::atomic<jmethodID> g_org_chromium_base_TimezoneUtils_getDefaultTimeZoneId(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_TimezoneUtils_getDefaultTimeZoneId(JNIEnv*
    env) {
  jclass clazz = org_chromium_base_TimezoneUtils_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_base_TimezoneUtils_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getDefaultTimeZoneId",
          "()Ljava/lang/String;",
          &g_org_chromium_base_TimezoneUtils_getDefaultTimeZoneId);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_TimezoneUtils_JNI
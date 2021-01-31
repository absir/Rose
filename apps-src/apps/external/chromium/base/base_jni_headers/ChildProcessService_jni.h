// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/chromium/base/process_launcher/ChildProcessService

#ifndef org_chromium_base_process_launcher_ChildProcessService_JNI
#define org_chromium_base_process_launcher_ChildProcessService_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {

static void JNI_ChildProcessService_RegisterFileDescriptors(JNIEnv* env, const
    base::android::JavaParamRef<jobjectArray>& keys,
    const base::android::JavaParamRef<jintArray>& id,
    const base::android::JavaParamRef<jintArray>& fd,
    const base::android::JavaParamRef<jlongArray>& offset,
    const base::android::JavaParamRef<jlongArray>& size);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_natives_GEN_1JNI_org_1chromium_1base_1process_11launcher_1ChildProcessService_1registerFileDescriptors(
    JNIEnv* env,
    jclass jcaller,
    jobjectArray keys,
    jintArray id,
    jintArray fd,
    jlongArray offset,
    jlongArray size) {
  return JNI_ChildProcessService_RegisterFileDescriptors(env,
      base::android::JavaParamRef<jobjectArray>(env, keys),
      base::android::JavaParamRef<jintArray>(env, id), base::android::JavaParamRef<jintArray>(env,
      fd), base::android::JavaParamRef<jlongArray>(env, offset),
      base::android::JavaParamRef<jlongArray>(env, size));
}

static void JNI_ChildProcessService_ExitChildProcess(JNIEnv* env);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_natives_GEN_1JNI_org_1chromium_1base_1process_11launcher_1ChildProcessService_1exitChildProcess(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_ChildProcessService_ExitChildProcess(env);
}

static void JNI_ChildProcessService_DumpProcessStack(JNIEnv* env);

JNI_GENERATOR_EXPORT void
    Java_org_chromium_base_natives_GEN_1JNI_org_1chromium_1base_1process_11launcher_1ChildProcessService_1dumpProcessStack(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_ChildProcessService_DumpProcessStack(env);
}


}  // namespace android
}  // namespace base

#endif  // org_chromium_base_process_launcher_ChildProcessService_JNI

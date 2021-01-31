// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base\android\jni_generator\jni_generator.py
// For
//     org/chromium/net/AndroidNetworkLibrary

#ifndef org_chromium_net_AndroidNetworkLibrary_JNI
#define org_chromium_net_AndroidNetworkLibrary_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_net_AndroidNetworkLibrary[];
const char kClassPath_org_chromium_net_AndroidNetworkLibrary[] =
    "org/chromium/net/AndroidNetworkLibrary";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_chromium_net_AndroidNetworkLibrary_clazz(nullptr);
#ifndef org_chromium_net_AndroidNetworkLibrary_clazz_defined
#define org_chromium_net_AndroidNetworkLibrary_clazz_defined
inline jclass org_chromium_net_AndroidNetworkLibrary_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_net_AndroidNetworkLibrary,
      &g_org_chromium_net_AndroidNetworkLibrary_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_getMimeTypeFromExtension(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_AndroidNetworkLibrary_getMimeTypeFromExtension(JNIEnv* env, const
    base::android::JavaRef<jstring>& extension) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getMimeTypeFromExtension",
          "(Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_net_AndroidNetworkLibrary_getMimeTypeFromExtension);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, extension.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_haveOnlyLoopbackAddresses(nullptr);
static jboolean Java_AndroidNetworkLibrary_haveOnlyLoopbackAddresses(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "haveOnlyLoopbackAddresses",
          "()Z",
          &g_org_chromium_net_AndroidNetworkLibrary_haveOnlyLoopbackAddresses);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_verifyServerCertificates(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AndroidNetworkLibrary_verifyServerCertificates(JNIEnv* env, const
    base::android::JavaRef<jobjectArray>& certChain,
    const base::android::JavaRef<jstring>& authType,
    const base::android::JavaRef<jstring>& host) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "verifyServerCertificates",
          "([[BLjava/lang/String;Ljava/lang/String;)Lorg/chromium/net/AndroidCertVerifyResult;",
          &g_org_chromium_net_AndroidNetworkLibrary_verifyServerCertificates);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, certChain.obj(), authType.obj(), host.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_addTestRootCertificate(nullptr);
static void Java_AndroidNetworkLibrary_addTestRootCertificate(JNIEnv* env, const
    base::android::JavaRef<jbyteArray>& rootCert) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextUnchecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "addTestRootCertificate",
          "([B)V",
          &g_org_chromium_net_AndroidNetworkLibrary_addTestRootCertificate);

     env->CallStaticVoidMethod(clazz,
          call_context.method_id, rootCert.obj());
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_clearTestRootCertificates(nullptr);
static void Java_AndroidNetworkLibrary_clearTestRootCertificates(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextUnchecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "clearTestRootCertificates",
          "()V",
          &g_org_chromium_net_AndroidNetworkLibrary_clearTestRootCertificates);

     env->CallStaticVoidMethod(clazz,
          call_context.method_id);
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getNetworkOperator(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_AndroidNetworkLibrary_getNetworkOperator(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getNetworkOperator",
          "()Ljava/lang/String;",
          &g_org_chromium_net_AndroidNetworkLibrary_getNetworkOperator);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getSimOperator(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_AndroidNetworkLibrary_getSimOperator(JNIEnv*
    env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getSimOperator",
          "()Ljava/lang/String;",
          &g_org_chromium_net_AndroidNetworkLibrary_getSimOperator);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getIsRoaming(nullptr);
static jboolean Java_AndroidNetworkLibrary_getIsRoaming(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getIsRoaming",
          "()Z",
          &g_org_chromium_net_AndroidNetworkLibrary_getIsRoaming);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getIsCaptivePortal(nullptr);
static jboolean Java_AndroidNetworkLibrary_getIsCaptivePortal(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getIsCaptivePortal",
          "()Z",
          &g_org_chromium_net_AndroidNetworkLibrary_getIsCaptivePortal);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getWifiSSID(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_AndroidNetworkLibrary_getWifiSSID(JNIEnv*
    env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getWifiSSID",
          "()Ljava/lang/String;",
          &g_org_chromium_net_AndroidNetworkLibrary_getWifiSSID);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getWifiSignalLevel(nullptr);
static jint Java_AndroidNetworkLibrary_getWifiSignalLevel(JNIEnv* env, JniIntWrapper countBuckets) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getWifiSignalLevel",
          "(I)I",
          &g_org_chromium_net_AndroidNetworkLibrary_getWifiSignalLevel);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, as_jint(countBuckets));
  return ret;
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_isCleartextPermitted(nullptr);
static jboolean Java_AndroidNetworkLibrary_isCleartextPermitted(JNIEnv* env, const
    base::android::JavaRef<jstring>& host) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "isCleartextPermitted",
          "(Ljava/lang/String;)Z",
          &g_org_chromium_net_AndroidNetworkLibrary_isCleartextPermitted);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, host.obj());
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_getDnsStatus(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_AndroidNetworkLibrary_getDnsStatus(JNIEnv*
    env, const base::android::JavaRef<jobject>& network) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getDnsStatus",
          "(Landroid/net/Network;)Lorg/chromium/net/DnsStatus;",
          &g_org_chromium_net_AndroidNetworkLibrary_getDnsStatus);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, network.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_chromium_net_AndroidNetworkLibrary_reportBadDefaultNetwork(nullptr);
static jboolean Java_AndroidNetworkLibrary_reportBadDefaultNetwork(JNIEnv* env) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "reportBadDefaultNetwork",
          "()Z",
          &g_org_chromium_net_AndroidNetworkLibrary_reportBadDefaultNetwork);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_chromium_net_AndroidNetworkLibrary_tagSocket(nullptr);
static void Java_AndroidNetworkLibrary_tagSocket(JNIEnv* env, JniIntWrapper ifd,
    JniIntWrapper uid,
    JniIntWrapper tag) {
  jclass clazz = org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "tagSocket",
          "(III)V",
          &g_org_chromium_net_AndroidNetworkLibrary_tagSocket);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, as_jint(ifd), as_jint(uid), as_jint(tag));
}

#endif  // org_chromium_net_AndroidNetworkLibrary_JNI

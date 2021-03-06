/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_openhome_net_device_DvDevice */

#ifndef _Included_org_openhome_net_device_DvDevice
#define _Included_org_openhome_net_device_DvDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceCreate
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceCreate
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceUdn
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceUdn
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceEnabled
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceEnabled
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceSetEnabled
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceSetEnabled
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceSetDisabled
 * Signature: (JLorg/openhome/net/device/IDvDeviceListener;)V
 */
JNIEXPORT void JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceSetDisabled
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceGetAttribute
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceGetAttribute
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_openhome_net_device_DvDevice
 * Method:    DvDeviceSetAttribute
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_openhome_net_device_DvDevice_DvDeviceSetAttribute
  (JNIEnv *, jclass, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif

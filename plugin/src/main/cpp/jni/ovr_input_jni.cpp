/**
* Created by Fredia Huya-Kouadio.
*/

#include <jni.h>
#include "api/ovr_input.h"
#include "jni_common.h"

#undef JNI_PACKAGE_NAME
#define JNI_PACKAGE_NAME org_godotengine_plugin_vr_oculus_mobile_api

#undef JNI_CLASS_NAME
#define JNI_CLASS_NAME OvrInput

extern "C" {

JNIEXPORT void JNICALL
JNI_METHOD(nativeVibrateController)(JNIEnv *env, jclass clazz, jint controller_id,
                                    jfloat intensity) {
    ovrmobile::vibrate_controller(get_session(), controller_id, intensity);
}

};
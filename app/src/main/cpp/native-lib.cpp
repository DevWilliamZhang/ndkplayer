#include <jni.h>
#include <string>
#include "IDemux.h"
#include "FFDemux.h"


extern "C" JNIEXPORT jstring JNICALL
Java_com_ndk_zz_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C===++";
    IDemux *de =new FFDemux();
    de->Open("/sdcard.1080.mp4");
    return env->NewStringUTF(hello.c_str());
}

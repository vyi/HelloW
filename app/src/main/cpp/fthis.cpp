//
// Created by vivek on 3/16/2022.
//
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL Java_com_example_hellow_MainActivity_doProcessing(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Can this get any better ?";
    std::printf("Where would this message go");
    return env->NewStringUTF(hello.c_str());
}

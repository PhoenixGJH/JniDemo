#include "com_phoenix_jnidemo_HelloJni.h"

JNIEXPORT jstring JNICALL
                 Java_com_phoenix_jnidemo_HelloJni_sayHello(JNIEnv *env, jobject obj)
{
    return (*env)->NewStringUTF(env, "Hello Jni");
}
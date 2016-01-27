/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "malamute.h"
#include "../../native/include/org_zeromq_mlm_MlmProto.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmProto__1_1new (JNIEnv *env, jclass c)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) mlm_proto_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    mlm_proto_destroy ((mlm_proto_t **) &self);
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmProto__1_1recv (JNIEnv *env, jclass c, jlong self, jlong input)
{
    jint recv_ = (jint) mlm_proto_recv ((mlm_proto_t *) (intptr_t) self, (zsock_t *) (intptr_t) input);
    return recv_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmProto__1_1send (JNIEnv *env, jclass c, jlong self, jlong output)
{
    jint send_ = (jint) mlm_proto_send ((mlm_proto_t *) (intptr_t) self, (zsock_t *) (intptr_t) output);
    return send_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1print (JNIEnv *env, jclass c, jlong self)
{
    mlm_proto_print ((mlm_proto_t *) (intptr_t) self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmProto__1_1routingId (JNIEnv *env, jclass c, jlong self)
{
    jlong routing_id_ = (jlong) (intptr_t) mlm_proto_routing_id ((mlm_proto_t *) (intptr_t) self);
    return routing_id_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setRoutingId (JNIEnv *env, jclass c, jlong self, jlong routing_id)
{
    mlm_proto_set_routing_id ((mlm_proto_t *) (intptr_t) self, (zframe_t *) (intptr_t) routing_id);
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmProto__1_1id (JNIEnv *env, jclass c, jlong self)
{
    jint id_ = (jint) mlm_proto_id ((mlm_proto_t *) (intptr_t) self);
    return id_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setId (JNIEnv *env, jclass c, jlong self, jint id)
{
    mlm_proto_set_id ((mlm_proto_t *) (intptr_t) self, (int) id);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1command (JNIEnv *env, jclass c, jlong self)
{
    char *command_ = (char *) mlm_proto_command ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, command_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1address (JNIEnv *env, jclass c, jlong self)
{
    char *address_ = (char *) mlm_proto_address ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, address_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setAddress (JNIEnv *env, jclass c, jlong self, jstring address)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    mlm_proto_set_address ((mlm_proto_t *) (intptr_t) self, address_);
    (*env)->ReleaseStringUTFChars (env, address, address_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1stream (JNIEnv *env, jclass c, jlong self)
{
    char *stream_ = (char *) mlm_proto_stream ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, stream_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setStream (JNIEnv *env, jclass c, jlong self, jstring stream)
{
    char *stream_ = (char *) (*env)->GetStringUTFChars (env, stream, NULL);
    mlm_proto_set_stream ((mlm_proto_t *) (intptr_t) self, stream_);
    (*env)->ReleaseStringUTFChars (env, stream, stream_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1pattern (JNIEnv *env, jclass c, jlong self)
{
    char *pattern_ = (char *) mlm_proto_pattern ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, pattern_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setPattern (JNIEnv *env, jclass c, jlong self, jstring pattern)
{
    char *pattern_ = (char *) (*env)->GetStringUTFChars (env, pattern, NULL);
    mlm_proto_set_pattern ((mlm_proto_t *) (intptr_t) self, pattern_);
    (*env)->ReleaseStringUTFChars (env, pattern, pattern_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1subject (JNIEnv *env, jclass c, jlong self)
{
    char *subject_ = (char *) mlm_proto_subject ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, subject_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setSubject (JNIEnv *env, jclass c, jlong self, jstring subject)
{
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    mlm_proto_set_subject ((mlm_proto_t *) (intptr_t) self, subject_);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmProto__1_1content (JNIEnv *env, jclass c, jlong self)
{
    jlong content_ = (jlong) (intptr_t) mlm_proto_content ((mlm_proto_t *) (intptr_t) self);
    return content_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmProto__1_1getContent (JNIEnv *env, jclass c, jlong self)
{
    jlong get_content_ = (jlong) (intptr_t) mlm_proto_get_content ((mlm_proto_t *) (intptr_t) self);
    return get_content_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setContent (JNIEnv *env, jclass c, jlong self, jlong content_p)
{
    mlm_proto_set_content ((mlm_proto_t *) (intptr_t) self, (zmsg_t **) (intptr_t) &content_p);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1sender (JNIEnv *env, jclass c, jlong self)
{
    char *sender_ = (char *) mlm_proto_sender ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, sender_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setSender (JNIEnv *env, jclass c, jlong self, jstring sender)
{
    char *sender_ = (char *) (*env)->GetStringUTFChars (env, sender, NULL);
    mlm_proto_set_sender ((mlm_proto_t *) (intptr_t) self, sender_);
    (*env)->ReleaseStringUTFChars (env, sender, sender_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1tracker (JNIEnv *env, jclass c, jlong self)
{
    char *tracker_ = (char *) mlm_proto_tracker ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, tracker_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setTracker (JNIEnv *env, jclass c, jlong self, jstring tracker)
{
    char *tracker_ = (char *) (*env)->GetStringUTFChars (env, tracker, NULL);
    mlm_proto_set_tracker ((mlm_proto_t *) (intptr_t) self, tracker_);
    (*env)->ReleaseStringUTFChars (env, tracker, tracker_);
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmProto__1_1timeout (JNIEnv *env, jclass c, jlong self)
{
    jint timeout_ = (jint) mlm_proto_timeout ((mlm_proto_t *) (intptr_t) self);
    return timeout_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setTimeout (JNIEnv *env, jclass c, jlong self, jint timeout)
{
    mlm_proto_set_timeout ((mlm_proto_t *) (intptr_t) self, (uint32_t) timeout);
}

JNIEXPORT jshort JNICALL
Java_org_zeromq_mlm_MlmProto__1_1statusCode (JNIEnv *env, jclass c, jlong self)
{
    jshort status_code_ = (jshort) mlm_proto_status_code ((mlm_proto_t *) (intptr_t) self);
    return status_code_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setStatusCode (JNIEnv *env, jclass c, jlong self, jshort status_code)
{
    mlm_proto_set_status_code ((mlm_proto_t *) (intptr_t) self, (uint16_t) status_code);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmProto__1_1statusReason (JNIEnv *env, jclass c, jlong self)
{
    char *status_reason_ = (char *) mlm_proto_status_reason ((mlm_proto_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, status_reason_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setStatusReason (JNIEnv *env, jclass c, jlong self, jstring status_reason)
{
    char *status_reason_ = (char *) (*env)->GetStringUTFChars (env, status_reason, NULL);
    mlm_proto_set_status_reason ((mlm_proto_t *) (intptr_t) self, status_reason_);
    (*env)->ReleaseStringUTFChars (env, status_reason, status_reason_);
}

JNIEXPORT jshort JNICALL
Java_org_zeromq_mlm_MlmProto__1_1amount (JNIEnv *env, jclass c, jlong self)
{
    jshort amount_ = (jshort) mlm_proto_amount ((mlm_proto_t *) (intptr_t) self);
    return amount_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1setAmount (JNIEnv *env, jclass c, jlong self, jshort amount)
{
    mlm_proto_set_amount ((mlm_proto_t *) (intptr_t) self, (uint16_t) amount);
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmProto__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    mlm_proto_test ((bool) verbose);
}


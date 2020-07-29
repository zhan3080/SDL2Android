#ifndef _LOGGER_H
#define _LOGGER_H
#include <stdio.h>
#include <android/log.h>
#include <stdlib.h>

#define TAG_BASE "common-base"
#define true 1
#define false 0


#define LogF(module_tag, bLoggerFlag, fmt, ...)                                                      \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                      \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_FATAL,TAG_BASE,"[%s:%u] "fmt, module_tag, __LINE__, ##__VA_ARGS__);       \
    }                                                                                                        \

#define LogE(module_tag, bLoggerFlag, fmt, ...)                                                      \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                      \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_ERROR,TAG_BASE,"[%s:%u] "fmt, module_tag,  __LINE__, ##__VA_ARGS__);      \
    }                                                                                                        \

#define LogW(module_tag, bLoggerFlag, fmt, ...)                                                       \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                    \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_WARN,TAG_BASE,"[%s:%u] "fmt, module_tag,  __LINE__, ##__VA_ARGS__);   \
    }                                                                                                        \

#define LogI(module_tag, bLoggerFlag, fmt, ...)                                                       \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                       \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_INFO,TAG_BASE,"[%s:%u] "fmt, module_tag,  __LINE__, ##__VA_ARGS__);       \
    }                                                                                                        \

#define LogD(module_tag, bLoggerFlag, fmt, ...)                                                      \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                      \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_DEBUG,TAG_BASE,"[%s:%u] "fmt, module_tag,  __LINE__, ##__VA_ARGS__);      \
    }                                                                                                        \

#define LogN(module_tag, bLoggerFlag, fmt, ...)                                                      \
    if( (NULL!= module_tag) && (true == bLoggerFlag))                      \
    {                                                                                                        \
        __android_log_print(ANDROID_LOG_INFO,TAG_BASE, fmt, ##__VA_ARGS__);      \
    }                                                                                                        \

#endif

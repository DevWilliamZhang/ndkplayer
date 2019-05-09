//
// Created by Administrator on 2019/5/9/0009.
//

#ifndef NDKPLAYER_XLOG_H
#define NDKPLAYER_XLOG_H

#include <android/log.h>
#define XLOGW(...) __android_log_print(ANDROID_LOG_WARN,"testff",__VA_ARGS__);
#define XLOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,"XLOG",__VA_ARGS__);
#define XLOGI(...)  __android_log_print(ANDROID_LOG_INFO,"XLOG",__VA_ARGS__);


class XLog {

};

#endif //NDKPLAYER_XLOG_H

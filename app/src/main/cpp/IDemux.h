//
// Created by Administrator on 2019/5/9/0009.
//

#ifndef NDKPLAYER_IDEMUX_H
#define NDKPLAYER_IDEMUX_H


#include "XData.h"

class IDemux {
public:
    //打开文件 或者流媒体
    virtual bool Open(const char *url) = 0;
    //读取一帧数据 数据由调用者 清理
    virtual XData Read() = 0;
};


#endif //NDKPLAYER_IDEMUX_H

//
// Created by Administrator on 2019/5/9/0009.
//

#ifndef NDKPLAYER_FFDEMUX_H
#define NDKPLAYER_FFDEMUX_H


#include "IDemux.h"

class FFDemux : public IDemux{
public:
    //打开文件 或者流媒体
    virtual bool Open(const char *url) ;
    //读取一帧数据 数据由调用者 清理
    virtual XData Read() ;
};


#endif //NDKPLAYER_FFDEMUX_H

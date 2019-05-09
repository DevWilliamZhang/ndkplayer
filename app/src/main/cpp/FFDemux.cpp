//
// Created by Administrator on 2019/5/9/0009.
//

#include "FFDemux.h"
#include "XLog.h"


//打开文件 或者流媒体
 bool FFDemux::Open(const char *url) {
    XLOGI("SS  %s 上的飞机",url);
    return false;
}
//读取一帧数据 数据由调用者 清理
 XData FFDemux::Read() {
    XData data;
    return  data;
}
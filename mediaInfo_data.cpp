//
// Created by Henry on 5/6/2015.
//

#include "mediaInfo_data.h"
#include "MediaInfoDLL.h"
#include <cstdio>

#include <iostream>


class MediaInfo;

std::vector<std::string> mediaInfoData::getCodecs() {
    MediaInfoDLL::MediaInfo     MI;
    std::vector<std::string>    codecs;
    std::stringstream           ss(MI.Option(__T("Info_Codecs")));
    std::string                 item;
    while(std::getline(ss, item, '\n')){
        codecs.push_back(item);
    }
//    for(std::string &part: codecs){
//        std::cout<<part<<std::endl;
//    }
//    std::puts("inside here");
//    std::puts();
    MI.Close();
    return codecs;
}

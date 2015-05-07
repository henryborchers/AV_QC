#include <iostream>
#include <QApplication>
#include <vector>
#include <string>
#include "mainwindow.h"
#include "mediaInfo_data.h"
using namespace std;

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
//    vector<string> codecs = mediaInfoData::getCodecs();
//    for(string &x: codecs){
//        cout << x<<endl;
//    }
    return 0;
}
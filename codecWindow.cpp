//
// Created by Henry on 5/6/2015.
//

#include "codecWindow.h"
#include <QtDebug>
#include "ui_codecs.h"
#include <string>
#include <vector>
#include "mediaInfo_data.h"

const int totalCodecsSupported = 10;

codecWindow::codecWindow(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::CodecsDialog)
{

    ui->setupUi(this);
    this->model = new QStringListModel(this);
    std::vector<std::string> codecs = mediaInfoData::getCodecs();

    QStringList list;
    for(std::string &codec: codecs){
        list.push_back(codec.c_str());
    }
    model->setStringList(list);
    ui->tbl_codecs->setModel(model);
}

codecWindow::~codecWindow() {
    delete model;
    delete ui;
}

void codecWindow::on_btnTest_clicked() {
//    ui->tbl_codecs->row



//    list << "Adam" << "Bob" << "Carl";

//    QTableWidgetItem *newItem = new QTableWidgetItem(tr("dfdf").arg(1)*(1));
    qDebug() << "clicky";

}

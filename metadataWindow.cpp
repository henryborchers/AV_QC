//
// Created by Henry on 5/4/2015.
//

#include "metadataWindow.h"
#include <QDebug>
#include "ui_data.h"
#include "ui_codecs.h"

metadataWindow::metadataWindow(const QFileInfo &fileName, QWidget *parent) :
        QDialog(parent),
        ui(new Ui::dlg_data)
{
    ui->setupUi(this);
    qDebug() << fileName.fileName();
    this->theFile = fileName;
    ui->FileTitle->setText(theFile.fileName());
}

metadataWindow::~metadataWindow() {
    delete ui;
}

//
// Created by Henry on 5/4/2015.
//

#include "mainwindow.h"
#include <QtDebug>
#include <QFileDialog>

#include "ui_mainWindow.h"
#include "metadataWindow.h"
#include "codecWindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_browse_clicked() {
    QString response = QFileDialog::getOpenFileName(this, tr("Select Video File"), QDir::homePath(), "All Files (*.*)");
    if(!response.isEmpty()) {
        fileName = response;
        ui->le_fileName->setText(this->fileName);

    }
}

void MainWindow::on_btn_open_clicked() {
    qDebug() << "Opening:" <<this->fileName;
    metadataWindow MetadataWindow(this->fileName);
    MetadataWindow.setModal(true);
    MetadataWindow.exec();


}

bool MainWindow::_fileExists(QString path) {
    QFileInfo checkFile(path);
    if(checkFile.exists() && checkFile.isFile()){
        return true;
    } else {
        return false;
    }
}

void MainWindow::on_le_fileName_textChanged() {
    this->fileName = ui->le_fileName->text();
    qDebug() << fileName;
    if(_fileExists(this->fileName)){
        QFileInfo temp(fileName);
        this->dataFile = temp;
        ui->btn_open->setEnabled(true);
    } else {
//        this->dataFile.;
        ui->btn_open->setEnabled(false);
    }
}

void MainWindow::on_actionQuit_triggered() {
    qDebug() << "Quitting"<<endl;
//    connect(this, SIGNAL(triggered()), MainWindow, SLOT(close()));
    QApplication::quit();
}


void MainWindow::on_actionSupported_Codecs_triggered() {
    qDebug() << "Loading Codecs Window" << endl;
    codecWindow cdcWindow;
    cdcWindow.setModal(true);
    cdcWindow.exec();

}

//
// Created by Henry on 5/6/2015.
//

#ifndef QC_AV_CODECWINDOW_H
#define QC_AV_CODECWINDOW_H
#include <QDialog>
#include <QtCore/qstringlistmodel.h>
#include "ui_codecs.h"

namespace Ui
{
    class codecWindow;
}

class codecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit codecWindow(QWidget *parent = 0);
    ~codecWindow();

private slots:
    void on_btnTest_clicked();

private:
    Ui::CodecsDialog *ui;
    QStringListModel *model;


};
#endif //QC_AV_CODECWINDOW_H

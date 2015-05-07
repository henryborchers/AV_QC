//
// Created by Henry on 5/4/2015.
//

#ifndef QC_AV_METADATAWINDOW_H
#define QC_AV_METADATAWINDOW_H
#include <QDialog>
#include <QFileInfo>
#include "ui_data.h"

namespace  Ui
{
    class metadataWindow;
}

class metadataWindow : public QDialog
{
    Q_OBJECT

public:
    explicit metadataWindow(const QFileInfo &fileName, QWidget *parent = 0);
    ~metadataWindow();

private:
    Ui::dlg_data *ui;
    QFileInfo theFile;
};
#endif //QC_AV_METADATAWINDOW_H

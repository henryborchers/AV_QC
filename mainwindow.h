//
// Created by Henry on 5/4/2015.
//

#ifndef QC_AV_MAINWINDOW_H
#define QC_AV_MAINWINDOW_H

#include <QMainWindow>
#include <QFileInfo>
namespace  Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_browse_clicked();
    void on_btn_open_clicked();
    void on_le_fileName_textChanged();
    void on_actionQuit_triggered();
    void on_actionSupported_Codecs_triggered();



private:
    Ui::MainWindow *ui;
    QString fileName;
    QFileInfo dataFile;

    bool _fileExists(QString path);
};

#endif //QC_AV_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_H
#define UI_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlg_data
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *FileTitle;
    QTableWidget *tableWidget;
    QPushButton *btn_close;

    void setupUi(QDialog *dlg_data)
    {
        if (dlg_data->objectName().isEmpty())
            dlg_data->setObjectName(QStringLiteral("dlg_data"));
        dlg_data->resize(393, 302);
        verticalLayout = new QVBoxLayout(dlg_data);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(dlg_data);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        FileTitle = new QLabel(frame);
        FileTitle->setObjectName(QStringLiteral("FileTitle"));

        verticalLayout_2->addWidget(FileTitle);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        btn_close = new QPushButton(frame);
        btn_close->setObjectName(QStringLiteral("btn_close"));

        verticalLayout_2->addWidget(btn_close);


        verticalLayout->addWidget(frame);


        retranslateUi(dlg_data);
        QObject::connect(btn_close, SIGNAL(clicked()), dlg_data, SLOT(close()));

        QMetaObject::connectSlotsByName(dlg_data);
    } // setupUi

    void retranslateUi(QDialog *dlg_data)
    {
        dlg_data->setWindowTitle(QApplication::translate("dlg_data", "Data", 0));
        FileTitle->setText(QApplication::translate("dlg_data", "TextLabel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("dlg_data", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("dlg_data", "Data", 0));
        btn_close->setText(QApplication::translate("dlg_data", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class dlg_data: public Ui_dlg_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_H

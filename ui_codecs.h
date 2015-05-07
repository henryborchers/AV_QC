/********************************************************************************
** Form generated from reading UI file 'codecs.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODECS_H
#define UI_CODECS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CodecsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tbl_codecs;
    QPushButton *btnTest;

    void setupUi(QDialog *CodecsDialog)
    {
        if (CodecsDialog->objectName().isEmpty())
            CodecsDialog->setObjectName(QStringLiteral("CodecsDialog"));
        CodecsDialog->resize(614, 396);
        verticalLayout = new QVBoxLayout(CodecsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tbl_codecs = new QTableView(CodecsDialog);
        tbl_codecs->setObjectName(QStringLiteral("tbl_codecs"));

        verticalLayout->addWidget(tbl_codecs);

        btnTest = new QPushButton(CodecsDialog);
        btnTest->setObjectName(QStringLiteral("btnTest"));
        btnTest->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(btnTest);


        retranslateUi(CodecsDialog);

        QMetaObject::connectSlotsByName(CodecsDialog);
    } // setupUi

    void retranslateUi(QDialog *CodecsDialog)
    {
        CodecsDialog->setWindowTitle(QApplication::translate("CodecsDialog", "Codecs", 0));
        btnTest->setText(QApplication::translate("CodecsDialog", "Test", 0));
    } // retranslateUi

};

namespace Ui {
    class CodecsDialog: public Ui_CodecsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODECS_H

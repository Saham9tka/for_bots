/********************************************************************************
** Form generated from reading UI file 'errorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWINDOW_H
#define UI_ERRORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errorWindow
{
public:
    QLabel *errorTextLabel;

    void setupUi(QWidget *errorWindow)
    {
        if (errorWindow->objectName().isEmpty())
            errorWindow->setObjectName(QString::fromUtf8("errorWindow"));
        errorWindow->resize(400, 300);
        errorTextLabel = new QLabel(errorWindow);
        errorTextLabel->setObjectName(QString::fromUtf8("errorTextLabel"));
        errorTextLabel->setGeometry(QRect(80, 80, 241, 131));

        retranslateUi(errorWindow);

        QMetaObject::connectSlotsByName(errorWindow);
    } // setupUi

    void retranslateUi(QWidget *errorWindow)
    {
        errorWindow->setWindowTitle(QCoreApplication::translate("errorWindow", "Form", nullptr));
        errorTextLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class errorWindow: public Ui_errorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWINDOW_H

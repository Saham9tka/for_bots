/********************************************************************************
** Form generated from reading UI file 'youlosewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOULOSEWINDOW_H
#define UI_YOULOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YouLoseWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *YouLoseWindow)
    {
        if (YouLoseWindow->objectName().isEmpty())
            YouLoseWindow->setObjectName(QString::fromUtf8("YouLoseWindow"));
        YouLoseWindow->resize(277, 194);
        label = new QLabel(YouLoseWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 111, 20));

        retranslateUi(YouLoseWindow);

        QMetaObject::connectSlotsByName(YouLoseWindow);
    } // setupUi

    void retranslateUi(QWidget *YouLoseWindow)
    {
        YouLoseWindow->setWindowTitle(QCoreApplication::translate("YouLoseWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("YouLoseWindow", "\320\222\321\213 \320\277\321\200\320\276\320\270\320\263\321\200\320\260\320\273\320\270!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YouLoseWindow: public Ui_YouLoseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOULOSEWINDOW_H

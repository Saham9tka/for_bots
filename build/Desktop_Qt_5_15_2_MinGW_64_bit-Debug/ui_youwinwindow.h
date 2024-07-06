/********************************************************************************
** Form generated from reading UI file 'youwinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUWINWINDOW_H
#define UI_YOUWINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YouWinWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *YouWinWindow)
    {
        if (YouWinWindow->objectName().isEmpty())
            YouWinWindow->setObjectName(QString::fromUtf8("YouWinWindow"));
        YouWinWindow->resize(242, 160);
        label = new QLabel(YouWinWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 101, 20));

        retranslateUi(YouWinWindow);

        QMetaObject::connectSlotsByName(YouWinWindow);
    } // setupUi

    void retranslateUi(QWidget *YouWinWindow)
    {
        YouWinWindow->setWindowTitle(QCoreApplication::translate("YouWinWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("YouWinWindow", "\320\222\321\213 \320\277\320\276\320\261\320\265\320\264\320\270\320\273\320\270!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YouWinWindow: public Ui_YouWinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUWINWINDOW_H

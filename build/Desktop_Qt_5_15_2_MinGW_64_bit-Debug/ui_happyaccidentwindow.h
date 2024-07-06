/********************************************************************************
** Form generated from reading UI file 'happyaccidentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAPPYACCIDENTWINDOW_H
#define UI_HAPPYACCIDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HappyAccidentWindow
{
public:
    QLabel *label;
    QLabel *happyAccidentDescriptionLabel;

    void setupUi(QWidget *HappyAccidentWindow)
    {
        if (HappyAccidentWindow->objectName().isEmpty())
            HappyAccidentWindow->setObjectName(QString::fromUtf8("HappyAccidentWindow"));
        HappyAccidentWindow->resize(400, 300);
        label = new QLabel(HappyAccidentWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 381, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        happyAccidentDescriptionLabel = new QLabel(HappyAccidentWindow);
        happyAccidentDescriptionLabel->setObjectName(QString::fromUtf8("happyAccidentDescriptionLabel"));
        happyAccidentDescriptionLabel->setGeometry(QRect(60, 100, 281, 131));

        retranslateUi(HappyAccidentWindow);

        QMetaObject::connectSlotsByName(HappyAccidentWindow);
    } // setupUi

    void retranslateUi(QWidget *HappyAccidentWindow)
    {
        HappyAccidentWindow->setWindowTitle(QCoreApplication::translate("HappyAccidentWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("HappyAccidentWindow", "<center>\320\241\321\207\320\260\321\201\321\202\320\273\320\270\320\262\321\213\320\271 \321\201\320\273\321\203\321\207\320\260\320\271!</center>", nullptr));
        happyAccidentDescriptionLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HappyAccidentWindow: public Ui_HappyAccidentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAPPYACCIDENTWINDOW_H

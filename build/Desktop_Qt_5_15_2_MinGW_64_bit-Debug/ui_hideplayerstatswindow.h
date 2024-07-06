/********************************************************************************
** Form generated from reading UI file 'hideplayerstatswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIDEPLAYERSTATSWINDOW_H
#define UI_HIDEPLAYERSTATSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HidePlayerStatsWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *HidePlayerStatsWindow)
    {
        if (HidePlayerStatsWindow->objectName().isEmpty())
            HidePlayerStatsWindow->setObjectName(QString::fromUtf8("HidePlayerStatsWindow"));
        HidePlayerStatsWindow->resize(938, 622);
        label = new QLabel(HidePlayerStatsWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 170, 801, 231));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(HidePlayerStatsWindow);

        QMetaObject::connectSlotsByName(HidePlayerStatsWindow);
    } // setupUi

    void retranslateUi(QWidget *HidePlayerStatsWindow)
    {
        HidePlayerStatsWindow->setWindowTitle(QCoreApplication::translate("HidePlayerStatsWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("HidePlayerStatsWindow", "<html><head/><body><p align=\"center\">\320\237\321\200\320\276\320\270\321\201\321\205\320\276\320\264\320\270\321\202 \321\201\320\274\320\265\320\275\320\260 \320\270\320\263\321\200\320\276\320\272\320\260.</p><p align=\"center\">\320\237\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \321\203\320\261\320\265\320\264\320\270\321\202\320\265\321\201\321\214, \321\207\321\202\320\276 \320\275\320\270\320\272\321\202\320\276 \320\275\320\265 \320\277\320\276\320\264\320\263\320\273\321\217\320\264\321\213\320\262\320\260\320\265\321\202</p><p align=\"center\">\320\262 \320\262\320\260\321\210\321\203 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\321\203, \320\270 \320\267\320\260\320\272\321\200\320\276\320\271\321\202\320\265 \321\215\321\202\320\276 \320\276\320\272\320\275\320\276.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HidePlayerStatsWindow: public Ui_HidePlayerStatsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIDEPLAYERSTATSWINDOW_H

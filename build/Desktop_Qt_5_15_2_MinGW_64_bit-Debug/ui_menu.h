/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *newGameButton;
    QPushButton *existedGameButton;
    QLabel *label;
    QPushButton *rulesOfGameButton;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(612, 472);
        newGameButton = new QPushButton(Menu);
        newGameButton->setObjectName(QString::fromUtf8("newGameButton"));
        newGameButton->setGeometry(QRect(190, 170, 221, 61));
        existedGameButton = new QPushButton(Menu);
        existedGameButton->setObjectName(QString::fromUtf8("existedGameButton"));
        existedGameButton->setGeometry(QRect(190, 260, 221, 71));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(72, 50, 461, 81));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        rulesOfGameButton = new QPushButton(Menu);
        rulesOfGameButton->setObjectName(QString::fromUtf8("rulesOfGameButton"));
        rulesOfGameButton->setGeometry(QRect(220, 370, 161, 41));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        newGameButton->setText(QCoreApplication::translate("Menu", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        existedGameButton->setText(QCoreApplication::translate("Menu", "\320\241\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("Menu", "<center>\320\255\320\272\320\276\320\275\320\276\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\320\270\321\217</center>", nullptr));
        rulesOfGameButton->setText(QCoreApplication::translate("Menu", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

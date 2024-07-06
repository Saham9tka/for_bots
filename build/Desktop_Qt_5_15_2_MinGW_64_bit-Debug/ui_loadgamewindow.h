/********************************************************************************
** Form generated from reading UI file 'loadgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADGAMEWINDOW_H
#define UI_LOADGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadGameWindow
{
public:
    QLineEdit *loginInputLine;
    QLineEdit *passwordInputLine;
    QLabel *label;
    QLabel *label_2;
    QPushButton *continueGameButton;
    QPushButton *backToMenuButton;

    void setupUi(QWidget *LoadGameWindow)
    {
        if (LoadGameWindow->objectName().isEmpty())
            LoadGameWindow->setObjectName(QString::fromUtf8("LoadGameWindow"));
        LoadGameWindow->resize(514, 392);
        loginInputLine = new QLineEdit(LoadGameWindow);
        loginInputLine->setObjectName(QString::fromUtf8("loginInputLine"));
        loginInputLine->setGeometry(QRect(160, 110, 281, 28));
        passwordInputLine = new QLineEdit(LoadGameWindow);
        passwordInputLine->setObjectName(QString::fromUtf8("passwordInputLine"));
        passwordInputLine->setGeometry(QRect(160, 160, 281, 28));
        label = new QLabel(LoadGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 110, 63, 20));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label_2 = new QLabel(LoadGameWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 160, 63, 20));
        label_2->setFont(font);
        continueGameButton = new QPushButton(LoadGameWindow);
        continueGameButton->setObjectName(QString::fromUtf8("continueGameButton"));
        continueGameButton->setGeometry(QRect(160, 250, 191, 41));
        backToMenuButton = new QPushButton(LoadGameWindow);
        backToMenuButton->setObjectName(QString::fromUtf8("backToMenuButton"));
        backToMenuButton->setGeometry(QRect(202, 320, 101, 29));

        retranslateUi(LoadGameWindow);

        QMetaObject::connectSlotsByName(LoadGameWindow);
    } // setupUi

    void retranslateUi(QWidget *LoadGameWindow)
    {
        LoadGameWindow->setWindowTitle(QCoreApplication::translate("LoadGameWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoadGameWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("LoadGameWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        continueGameButton->setText(QCoreApplication::translate("LoadGameWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("LoadGameWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadGameWindow: public Ui_LoadGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADGAMEWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'newgamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEWINDOW_H
#define UI_NEWGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewGameWindow
{
public:
    QLineEdit *startGameLogin;
    QLabel *label;
    QLineEdit *startGamePassword;
    QLabel *label_2;
    QPushButton *startGameButton;
    QRadioButton *onePlayerGameChoice;
    QRadioButton *twoPlayerGameChoice;
    QRadioButton *threePlayerGameChoice;
    QRadioButton *fourPlayerGameChoice;
    QLabel *label_3;

    void setupUi(QWidget *NewGameWindow)
    {
        if (NewGameWindow->objectName().isEmpty())
            NewGameWindow->setObjectName(QString::fromUtf8("NewGameWindow"));
        NewGameWindow->resize(507, 366);
        startGameLogin = new QLineEdit(NewGameWindow);
        startGameLogin->setObjectName(QString::fromUtf8("startGameLogin"));
        startGameLogin->setGeometry(QRect(140, 110, 291, 28));
        label = new QLabel(NewGameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 110, 63, 20));
        startGamePassword = new QLineEdit(NewGameWindow);
        startGamePassword->setObjectName(QString::fromUtf8("startGamePassword"));
        startGamePassword->setGeometry(QRect(140, 170, 291, 28));
        label_2 = new QLabel(NewGameWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 170, 63, 20));
        startGameButton = new QPushButton(NewGameWindow);
        startGameButton->setObjectName(QString::fromUtf8("startGameButton"));
        startGameButton->setGeometry(QRect(150, 290, 181, 29));
        onePlayerGameChoice = new QRadioButton(NewGameWindow);
        onePlayerGameChoice->setObjectName(QString::fromUtf8("onePlayerGameChoice"));
        onePlayerGameChoice->setGeometry(QRect(240, 230, 41, 26));
        twoPlayerGameChoice = new QRadioButton(NewGameWindow);
        twoPlayerGameChoice->setObjectName(QString::fromUtf8("twoPlayerGameChoice"));
        twoPlayerGameChoice->setGeometry(QRect(290, 230, 41, 26));
        threePlayerGameChoice = new QRadioButton(NewGameWindow);
        threePlayerGameChoice->setObjectName(QString::fromUtf8("threePlayerGameChoice"));
        threePlayerGameChoice->setGeometry(QRect(340, 230, 41, 26));
        fourPlayerGameChoice = new QRadioButton(NewGameWindow);
        fourPlayerGameChoice->setObjectName(QString::fromUtf8("fourPlayerGameChoice"));
        fourPlayerGameChoice->setGeometry(QRect(390, 230, 41, 26));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        fourPlayerGameChoice->setFont(font);
        label_3 = new QLabel(NewGameWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 230, 141, 20));

        retranslateUi(NewGameWindow);

        QMetaObject::connectSlotsByName(NewGameWindow);
    } // setupUi

    void retranslateUi(QWidget *NewGameWindow)
    {
        NewGameWindow->setWindowTitle(QCoreApplication::translate("NewGameWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("NewGameWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("NewGameWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        startGameButton->setText(QCoreApplication::translate("NewGameWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        onePlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "1", nullptr));
        twoPlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "2", nullptr));
        threePlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "3", nullptr));
        fourPlayerGameChoice->setText(QCoreApplication::translate("NewGameWindow", "4", nullptr));
        label_3->setText(QCoreApplication::translate("NewGameWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\263\321\200\320\276\320\272\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewGameWindow: public Ui_NewGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEWINDOW_H

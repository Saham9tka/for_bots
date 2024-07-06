/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QPushButton *nextTurnButton;
    QPushButton *giveUpButton;
    QLabel *gamerNumber;
    QLabel *roundNumber;
    QLabel *playerStates;
    QLabel *bankStates;
    QLabel *label;
    QSpinBox *buyMaterialsAmountChoice;
    QLabel *label_2;
    QSpinBox *sellResourcesAmountChoice;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLabel *giveFactoryLabel;
    QLabel *giveMoneyLabel;
    QLabel *giveMaterialsLabel;
    QLabel *giveResourcesLabel;
    QCheckBox *giveFactoryChoice;
    QSpinBox *giveMaterialsChoice;
    QSpinBox *giveResourcesChoice;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkBox_2;
    QLabel *label_7;
    QLineEdit *buyMaterialsPriceChoice;
    QLineEdit *sellProductPriceChoice;
    QLineEdit *giveMoneyChoice;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QSpinBox *spinBox;

    void setupUi(QWidget *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(862, 520);
        nextTurnButton = new QPushButton(GameWindow);
        nextTurnButton->setObjectName(QString::fromUtf8("nextTurnButton"));
        nextTurnButton->setGeometry(QRect(20, 440, 191, 61));
        giveUpButton = new QPushButton(GameWindow);
        giveUpButton->setObjectName(QString::fromUtf8("giveUpButton"));
        giveUpButton->setGeometry(QRect(760, 470, 83, 29));
        gamerNumber = new QLabel(GameWindow);
        gamerNumber->setObjectName(QString::fromUtf8("gamerNumber"));
        gamerNumber->setGeometry(QRect(50, 40, 63, 20));
        roundNumber = new QLabel(GameWindow);
        roundNumber->setObjectName(QString::fromUtf8("roundNumber"));
        roundNumber->setGeometry(QRect(50, 70, 63, 20));
        playerStates = new QLabel(GameWindow);
        playerStates->setObjectName(QString::fromUtf8("playerStates"));
        playerStates->setGeometry(QRect(540, 50, 291, 241));
        QFont font;
        font.setPointSize(12);
        playerStates->setFont(font);
        bankStates = new QLabel(GameWindow);
        bankStates->setObjectName(QString::fromUtf8("bankStates"));
        bankStates->setGeometry(QRect(540, 300, 291, 131));
        bankStates->setFont(font);
        label = new QLabel(GameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(158, 90, 131, 31));
        label->setFont(font);
        buyMaterialsAmountChoice = new QSpinBox(GameWindow);
        buyMaterialsAmountChoice->setObjectName(QString::fromUtf8("buyMaterialsAmountChoice"));
        buyMaterialsAmountChoice->setGeometry(QRect(418, 90, 61, 29));
        label_2 = new QLabel(GameWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(158, 50, 151, 31));
        label_2->setFont(font);
        sellResourcesAmountChoice = new QSpinBox(GameWindow);
        sellResourcesAmountChoice->setObjectName(QString::fromUtf8("sellResourcesAmountChoice"));
        sellResourcesAmountChoice->setGeometry(QRect(418, 50, 61, 29));
        checkBox = new QCheckBox(GameWindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(440, 200, 21, 31));
        checkBox->setFont(font);
        checkBox->setTristate(false);
        label_3 = new QLabel(GameWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 200, 271, 31));
        label_3->setFont(font);
        giveFactoryLabel = new QLabel(GameWindow);
        giveFactoryLabel->setObjectName(QString::fromUtf8("giveFactoryLabel"));
        giveFactoryLabel->setGeometry(QRect(160, 270, 241, 41));
        giveFactoryLabel->setFont(font);
        giveMoneyLabel = new QLabel(GameWindow);
        giveMoneyLabel->setObjectName(QString::fromUtf8("giveMoneyLabel"));
        giveMoneyLabel->setGeometry(QRect(160, 310, 171, 41));
        giveMoneyLabel->setFont(font);
        giveMaterialsLabel = new QLabel(GameWindow);
        giveMaterialsLabel->setObjectName(QString::fromUtf8("giveMaterialsLabel"));
        giveMaterialsLabel->setGeometry(QRect(160, 350, 211, 41));
        giveMaterialsLabel->setFont(font);
        giveResourcesLabel = new QLabel(GameWindow);
        giveResourcesLabel->setObjectName(QString::fromUtf8("giveResourcesLabel"));
        giveResourcesLabel->setGeometry(QRect(160, 390, 231, 41));
        giveResourcesLabel->setFont(font);
        giveFactoryChoice = new QCheckBox(GameWindow);
        giveFactoryChoice->setObjectName(QString::fromUtf8("giveFactoryChoice"));
        giveFactoryChoice->setGeometry(QRect(440, 280, 31, 31));
        giveMaterialsChoice = new QSpinBox(GameWindow);
        giveMaterialsChoice->setObjectName(QString::fromUtf8("giveMaterialsChoice"));
        giveMaterialsChoice->setGeometry(QRect(420, 360, 61, 29));
        giveResourcesChoice = new QSpinBox(GameWindow);
        giveResourcesChoice->setObjectName(QString::fromUtf8("giveResourcesChoice"));
        giveResourcesChoice->setGeometry(QRect(420, 400, 61, 29));
        label_4 = new QLabel(GameWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 20, 41, 20));
        label_5 = new QLabel(GameWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 20, 81, 20));
        label_6 = new QLabel(GameWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(158, 170, 251, 31));
        label_6->setFont(font);
        checkBox_2 = new QCheckBox(GameWindow);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(440, 240, 31, 31));
        label_7 = new QLabel(GameWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 230, 241, 41));
        label_7->setFont(font);
        buyMaterialsPriceChoice = new QLineEdit(GameWindow);
        buyMaterialsPriceChoice->setObjectName(QString::fromUtf8("buyMaterialsPriceChoice"));
        buyMaterialsPriceChoice->setGeometry(QRect(350, 90, 61, 28));
        sellProductPriceChoice = new QLineEdit(GameWindow);
        sellProductPriceChoice->setObjectName(QString::fromUtf8("sellProductPriceChoice"));
        sellProductPriceChoice->setGeometry(QRect(350, 50, 61, 28));
        giveMoneyChoice = new QLineEdit(GameWindow);
        giveMoneyChoice->setObjectName(QString::fromUtf8("giveMoneyChoice"));
        giveMoneyChoice->setGeometry(QRect(420, 320, 61, 28));
        lineEdit = new QLineEdit(GameWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 170, 131, 28));
        label_8 = new QLabel(GameWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 130, 191, 31));
        label_8->setFont(font);
        spinBox = new QSpinBox(GameWindow);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(420, 130, 61, 29));

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QWidget *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "Form", nullptr));
        nextTurnButton->setText(QCoreApplication::translate("GameWindow", "\320\227\320\260\320\272\320\276\320\275\321\207\320\270\321\202\321\214 \321\205\320\276\320\264", nullptr));
        giveUpButton->setText(QCoreApplication::translate("GameWindow", "\320\241\320\264\320\260\321\202\321\214\321\201\321\217", nullptr));
        gamerNumber->setText(QCoreApplication::translate("GameWindow", "\320\230\320\263\321\200\320\276\320\272 1", nullptr));
        roundNumber->setText(QCoreApplication::translate("GameWindow", "\320\240\320\260\321\203\320\275\320\264 1", nullptr));
        playerStates->setText(QString());
        bankStates->setText(QString());
        label->setText(QCoreApplication::translate("GameWindow", "\320\232\321\203\320\277\320\270\321\202\321\214 \321\201\321\213\321\200\321\214\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("GameWindow", "\320\237\321\200\320\276\320\264\320\260\321\202\321\214 \321\200\320\265\321\201\321\203\321\200\321\201", nullptr));
        checkBox->setText(QString());
        label_3->setText(QCoreApplication::translate("GameWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\204\320\260\320\261\321\200\320\270\320\272\321\203", nullptr));
        giveFactoryLabel->setText(QCoreApplication::translate("GameWindow", "\320\237\320\276\320\264\320\260\321\200\320\270\321\202\321\214 \321\204\320\260\320\261\321\200\320\270\320\272\321\203", nullptr));
        giveMoneyLabel->setText(QCoreApplication::translate("GameWindow", "\320\237\320\276\320\264\320\260\321\200\320\270\321\202\321\214 \320\264\320\265\320\275\321\214\320\263\320\270", nullptr));
        giveMaterialsLabel->setText(QCoreApplication::translate("GameWindow", "\320\237\320\276\320\264\320\260\321\200\320\270\321\202\321\214 \321\201\321\213\321\200\321\214\320\265", nullptr));
        giveResourcesLabel->setText(QCoreApplication::translate("GameWindow", "\320\237\320\276\320\264\320\260\321\200\320\270\321\202\321\214 \321\200\320\265\321\201\321\203\321\200\321\201\321\213", nullptr));
        giveFactoryChoice->setText(QString());
        label_4->setText(QCoreApplication::translate("GameWindow", "\320\246\320\265\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("GameWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("GameWindow", "\320\222\320\267\321\217\321\202\321\214 \320\272\321\200\320\265\320\264\320\270\321\202", nullptr));
        checkBox_2->setText(QString());
        label_7->setText(QCoreApplication::translate("GameWindow", "\320\222\320\267\321\217\321\202\321\214 \321\201\321\202\321\200\320\260\321\205\320\276\320\262\320\272\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("GameWindow", "\320\237\320\265\321\200\320\265\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \321\201\321\213\321\200\321\214\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H

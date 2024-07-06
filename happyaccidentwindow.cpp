#include "happyaccidentwindow.h"
#include "ui_happyaccidentwindow.h"

HappyAccidentWindow::HappyAccidentWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HappyAccidentWindow)
{
    ui->setupUi(this);
    setWindowTitle("Счастливый случай!");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

HappyAccidentWindow::~HappyAccidentWindow()
{
    delete ui;
}

void HappyAccidentWindow::generateRandomAccident(Chance event, int currentPlayerId){


    QString happyBirthdayString ="<center><p>У вас день рождения!</p><p>Все игроки должны подарить</p><p>по 100 валюты имениннику.</p></center>";
    QString burntFactoryString ="<center><p>У вас сгорела фабрика!</p><p>Если вы что-либо перерабатывали,</p><p>ресурсы сгорели с ней.</p></center>";
    QString notBurntFactoryString ="<center><p>У вас могла сгореть фабрика!</p><p>Страховка, взятая на месяц,</p><p>спасла фабрику и материалы.</p></center>";
    QString bankCrisisString ="<center><p>В банке кризис!</p><p>Каждый игрок обязан отдать</p><p>500 валюты для банка.</p></center>";
    QString inheritageString ="<center><p>Вам пришло наследство!</p><p>Деньги будут высланы банком.</p></center>";

    QString curId=QString::number(currentPlayerId);
    QString skipString ="<center><p>Пропуск хода!</p><p>Сотрудники требуют выходной!</p><p>Игрок "+ curId;
    QString skipString_2 = " пропускает текущий ход</p><p>в следствие отсутсвия сотрудников.</p></center>";
    skipString+=skipString_2;


    switch(event){
    case Chance::BirthDay:
        ui->happyAccidentDescriptionLabel->setText(happyBirthdayString);
        break;
    case Chance::Fabric_burn:
        ui->happyAccidentDescriptionLabel->setText(burntFactoryString);
        break;
    case Chance::Fabric_burn_not:
        ui->happyAccidentDescriptionLabel->setText(notBurntFactoryString);
        break;
    case Chance::Crisis:
        ui->happyAccidentDescriptionLabel->setText(bankCrisisString);
        break;
    case Chance::Inheritance:
        ui->happyAccidentDescriptionLabel->setText(inheritageString);
        break;
    case Chance::Skip:
        ui->happyAccidentDescriptionLabel->setText(skipString);
        break;
    }

}

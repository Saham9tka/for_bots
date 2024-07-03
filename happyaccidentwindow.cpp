#include "happyaccidentwindow.h"
#include "ui_happyaccidentwindow.h"

HappyAccidentWindow::HappyAccidentWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HappyAccidentWindow)
{
    ui->setupUi(this);
    setWindowTitle("Счастливый случай!");
}

HappyAccidentWindow::~HappyAccidentWindow()
{
    delete ui;
}

void HappyAccidentWindow::generateRandomAccident(){

    QString happyBirthdayString ="<center><p>У вас день рождения!</p><p>Все игроки должны что-то</p><p>подарить имениннику.</p></center>";
    QString burntFactoryString ="<center><p>У вас сгорела фабрика!</p><p>Если вы что-либо перерабатывали,</p><p>ресурсы сгорели с ней.</p></center>";
    QString bankCrisisString ="<center><p>В банке кризис!</p><p>Каждый игрок обязан отдать</p><p>что-то для банка.</p></center>";
    QString inheritageString ="<center><p>Вам пришло наследство!</p><p>Деньги будут высланы банком.</p></center>";
    QString profitString ="<center><p>Большой день!</p><p>Банк объявляет акции.</p><p>Скидка 50% на все!</p></center>";

    int happyNumber=rand()%5;
    switch(happyNumber){
    case 0:
        ui->happyAccidentDescriptionLabel->setText(happyBirthdayString);
        break;
    case 1:
        ui->happyAccidentDescriptionLabel->setText(burntFactoryString);
        break;
    case 2:
        ui->happyAccidentDescriptionLabel->setText(bankCrisisString);
        break;
    case 3:
        ui->happyAccidentDescriptionLabel->setText(inheritageString);
        break;
    case 4:
        ui->happyAccidentDescriptionLabel->setText(profitString);
        break;
    }

}

#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "happyaccidentwindow.h"
#include "youlosewindow.h"
#include "youwinwindow.h"
#include "hideplayerstatswindow.h"

GameWindow::GameWindow(Game* _gameState, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameWindow)
{
    gameState=_gameState;
    ui->setupUi(this);
    setWindowTitle("Экономическая стратегия");

    ui->giveFactoryLabel->hide();
    ui->giveFactoryChoice->hide();
    ui->giveMoneyLabel->hide();
    ui->giveMoneyChoice->hide();
    ui->giveMaterialsLabel->hide();
    ui->giveMaterialsChoice->hide();
    ui->giveResourcesChoice->hide();
    ui->giveResourcesLabel->hide();
}

int roundNumber = 1;
int turnNumber = 1;

GameWindow::~GameWindow()
{
    delete ui;
}

void checkHappyAccident(){
    int happyNumber=rand()%10;
    if (happyNumber==0){
        HappyAccidentWindow* happyAccidentWindow = new HappyAccidentWindow();
        happyAccidentWindow->generateRandomAccident();
        happyAccidentWindow->show();
    }
}

void GameWindow::on_nextTurnButton_clicked()
{
    turnNumber++;
    checkHappyAccident();
    if (turnNumber>4){
        turnNumber=1;
        roundNumber++;
    }
    ui->gamerNumber->setText("Игрок " + QString::number(turnNumber));
    ui->roundNumber->setText("Раунд " + QString::number(roundNumber));

    HidePlayerStatsWindow* hidePlayerStatsWindow = new HidePlayerStatsWindow();
    hidePlayerStatsWindow->show();

    //ui->giveFactoryLabel->show();
    //ui->giveFactoryChoice->show();
    //ui->giveMoneyLabel->show();
    //ui->giveMoneyChoice->show();
    //ui->giveMaterialsLabel->show();
    //ui->giveMaterialsChoice->show();
    //ui->giveResourcesChoice->show();
    //ui->giveResourcesLabel->show();
}

void GameWindow::on_giveUpButton_clicked()
{
    YouLoseWindow* youLoseWindow = new YouLoseWindow();
    youLoseWindow->show();
}


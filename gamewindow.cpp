#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "happyaccidentwindow.h"
#include "youlosewindow.h"
#include "youwinwindow.h"
#include "hideplayerstatswindow.h"
#include <string>

GameWindow::GameWindow(Game* _gameState, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameWindow)
{
    gameState=_gameState;
    ui->setupUi(this);
    setWindowTitle("Экономическая стратегия");


    bank=new Bank;
    for(int i =1;i<=_gameState->players;i++){
        bank->addPlayer(i);
    }
    displayBankStates();
    displayPlayerStates(bank->getPlayersMap()[1].getInfo());

    ui->giveFactoryLabel->hide();
    ui->giveFactoryChoice->hide();
    ui->giveMoneyLabel->hide();
    ui->giveMoneyChoice->hide();
    ui->giveMaterialsLabel->hide();
    ui->giveMaterialsChoice->hide();
    ui->giveResourcesChoice->hide();
    ui->giveResourcesLabel->hide();

   // connect(ui->field_00, SIGNAL(clicked()), this, SLOT(buttonClicked()));
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
    bank->auctionBuyOffer(gameState.turnNumber,ui->buyMaterialsAmountChoice->text().toInt(),ui->buyMaterialsPriceChoice->text().toInt());
    //bank->auctionSellOffer(gameState.turnNumbers)

    turnNumber++;
    checkHappyAccident();
    if (turnNumber > bank->getPlayersMap().size()){
        bank->processAuctions();
        bank->processTurn();
        turnNumber=1;
        roundNumber++;
        displayBankStates();
    }
    ui->gamerNumber->setText("Игрок " + QString::number(turnNumber));
    ui->roundNumber->setText("Раунд " + QString::number(roundNumber));

    HidePlayerStatsWindow* hidePlayerStatsWindow = new HidePlayerStatsWindow();
    hidePlayerStatsWindow->show();

    displayPlayerStates(bank->getPlayersMap()[turnNumber].getInfo());
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

void GameWindow::displayBankStates(){
    bank->bankBuyOffer();
    bank->bankSellOffer();


    std::string bankStatesString="Продажа сырья: " + std::to_string(bank->getRaw_material_price())
                             + "\nКоличество сырья: " + std::to_string(bank->getRaw_materials_for_sale())
                             + "\nКупля ресурсов: " + std::to_string(bank->getProduct_price())
                             + "\nКоличество ресурсов: " + std::to_string(bank->getProducts_for_sale());

    QString bankStateDisplay = QString::fromStdString(bankStatesString);

    ui->bankStates->setText(bankStateDisplay);
}

void GameWindow::displayPlayerStates(std::string playerStateString){
    QString playerStateDisplay = QString::fromStdString(playerStateString);

    ui->playerStates->setText(playerStateDisplay);
}


#include "loadgamewindow.h"
#include "gamewindow.h"
#include "ui_loadgamewindow.h"
#include "game.h"
#include "menu.h"

LoadGameWindow::LoadGameWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoadGameWindow)
{
    ui->setupUi(this);
    ui->continueGameButton->setEnabled(false);
    setWindowTitle("Вход");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

LoadGameWindow::~LoadGameWindow()
{
    delete ui;
}

void LoadGameWindow::on_continueGameButton_clicked()
{
    //Game* gameState = new Game{30000,2,ui->loginInputLine->text().toStdString()};
    //GameWindow *gameWindow = new GameWindow(gameState);
    Bank* bank = new Bank;    //когда появится загрузка
    bank->loadFromFile(ui->loginInputLine->text().toStdString());
    Game* gameState = new Game(bank->getPlayersMap().size(),0,ui->loginInputLine->text().toStdString());
    GameWindow *gameWindow = new GameWindow(bank,*gameState);
    gameWindow->show();
    this->hide();
}

bool loginIsInputted=false;

void LoadGameWindow::unblockContinueGameButton(bool loginSettled){
    if (loginSettled==true){
        ui->continueGameButton->setEnabled(true);
    }
}

void LoadGameWindow::on_loginInputLine_textChanged(const QString &arg1)
{
    loginIsInputted=true;
    unblockContinueGameButton(loginIsInputted);
}

void LoadGameWindow::on_backToMenuButton_clicked()
{
    Menu* menu = new Menu();
    menu->show();
    this->hide();
}


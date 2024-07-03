#include "newgamewindow.h"
#include "ui_newgamewindow.h"
#include "gamewindow.h"

NewGameWindow::NewGameWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewGameWindow)
{
    ui->setupUi(this);
    ui->startGameButton->setEnabled(false);
    setWindowTitle("Регистрация");
}

NewGameWindow::~NewGameWindow()
{
    delete ui;
}

void NewGameWindow::on_startGameButton_clicked()
{
    Game* gameState = new Game();
    GameWindow* gameWindow = new GameWindow(gameState);
    gameWindow->setWindowTitle("Экономическая стратегия");
    gameWindow->show();
    this->hide();
}

bool loginIsSettled=false;
bool passwordIsSettled=false;
bool playerCountIsSettled=false;

void NewGameWindow::on_startGameLogin_textChanged(const QString &arg1)
{
    loginIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);

}

void NewGameWindow::unblockStartGameButton(bool loginSettled, bool passwordSettled, bool playerCountSettled){
    if (loginSettled==true&&passwordSettled==true&&playerCountSettled==true){
        ui->startGameButton->setEnabled(true);
    }
}

void NewGameWindow::on_startGamePassword_textChanged(const QString &arg1)
{
    passwordIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);
}


void NewGameWindow::on_onePlayerGameChoice_clicked()
{
    playerCountIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);
}


void NewGameWindow::on_twoPlayerGameChoice_clicked()
{
    playerCountIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);
}


void NewGameWindow::on_threePlayerGameChoice_clicked()
{
    playerCountIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);
}


void NewGameWindow::on_fourPlayerGameChoice_clicked()
{
    playerCountIsSettled=true;
    unblockStartGameButton(loginIsSettled, passwordIsSettled, playerCountIsSettled);
}


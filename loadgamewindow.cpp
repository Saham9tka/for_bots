#include "loadgamewindow.h"
#include "gamewindow.h"
#include "ui_loadgamewindow.h"
#include "game.h"

LoadGameWindow::LoadGameWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoadGameWindow)
{
    ui->setupUi(this);
    ui->continueGameButton->setEnabled(false);
    setWindowTitle("Вход");
}

LoadGameWindow::~LoadGameWindow()
{
    delete ui;
}

void LoadGameWindow::on_continueGameButton_clicked()
{
    Game* gameState = new Game{30000,2};
    GameWindow *gameWindow = new GameWindow(gameState);
    // Bank* bank = readFileFunction();  когда появится загрузка
    // GameWindow *gameWindow = new GameWindow(bank);
    gameWindow->show();
    this->hide();
}

bool loginIsInputted=false;
bool passwordIsInputted=false;

void LoadGameWindow::unblockContinueGameButton(bool loginSettled, bool passwordSettled){
    if (loginSettled==true&&passwordSettled==true){
        ui->continueGameButton->setEnabled(true);
    }
}

void LoadGameWindow::on_loginInputLine_textChanged(const QString &arg1)
{
    loginIsInputted=true;
    unblockContinueGameButton(loginIsInputted, passwordIsInputted);
}


void LoadGameWindow::on_passwordInputLine_textChanged(const QString &arg1)
{
    passwordIsInputted=true;
    unblockContinueGameButton(loginIsInputted, passwordIsInputted);
}


#include "menu.h"
#include "ui_menu.h"
#include "newgamewindow.h"
#include "loadgamewindow.h"
#include "ruleswindow.h"

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    setWindowTitle("Меню");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_newGameButton_clicked()
{
    NewGameWindow* newGameWindow = new NewGameWindow;
    newGameWindow->show();
    this->hide();
}


void Menu::on_existedGameButton_clicked()
{
    LoadGameWindow* loadGameWindow = new LoadGameWindow();
    loadGameWindow->show();
    this->hide();
}


void Menu::on_rulesOfGameButton_clicked()
{
    RulesWindow* rulesWindow = new RulesWindow;
    rulesWindow->show();
}


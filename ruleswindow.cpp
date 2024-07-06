#include "ruleswindow.h"
#include "ui_ruleswindow.h"

RulesWindow::RulesWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RulesWindow)
{
    ui->setupUi(this);
    setWindowTitle("Правила игры");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

RulesWindow::~RulesWindow()
{
    delete ui;
}

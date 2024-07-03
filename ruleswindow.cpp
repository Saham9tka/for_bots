#include "ruleswindow.h"
#include "ui_ruleswindow.h"

RulesWindow::RulesWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RulesWindow)
{
    ui->setupUi(this);
    setWindowTitle("Правила игры");
}

RulesWindow::~RulesWindow()
{
    delete ui;
}

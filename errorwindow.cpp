#include "errorwindow.h"
#include "ui_errorwindow.h"

errorWindow::errorWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::errorWindow)
{
    ui->setupUi(this);
    setWindowTitle("Ошибка!");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

errorWindow::~errorWindow()
{
    delete ui;
}

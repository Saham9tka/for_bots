#include "errorwindow.h"
#include "ui_errorwindow.h"

errorWindow::errorWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::errorWindow)
{
    ui->setupUi(this);
    setWindowTitle("Ошибка!");
}

errorWindow::~errorWindow()
{
    delete ui;
}

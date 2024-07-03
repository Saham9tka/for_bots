#include "youlosewindow.h"
#include "ui_youlosewindow.h"

YouLoseWindow::YouLoseWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::YouLoseWindow)
{
    ui->setupUi(this);
    setWindowTitle("Вы проиграли");
}

YouLoseWindow::~YouLoseWindow()
{
    delete ui;
}

#include "youlosewindow.h"
#include "ui_youlosewindow.h"

YouLoseWindow::YouLoseWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::YouLoseWindow)
{
    ui->setupUi(this);
    setWindowTitle("Вы проиграли");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

YouLoseWindow::~YouLoseWindow()
{
    delete ui;
}

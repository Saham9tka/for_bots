#include "youwinwindow.h"
#include "ui_youwinwindow.h"

YouWinWindow::YouWinWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::YouWinWindow)
{
    ui->setupUi(this);
    setWindowTitle("Вы победили");

    QIcon economy_icon(":/source/economy_icon.png");
    setWindowIcon(economy_icon);
}

YouWinWindow::~YouWinWindow()
{
    delete ui;
}

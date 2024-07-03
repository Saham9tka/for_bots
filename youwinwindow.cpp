#include "youwinwindow.h"
#include "ui_youwinwindow.h"

YouWinWindow::YouWinWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::YouWinWindow)
{
    ui->setupUi(this);
    setWindowTitle("Вы победили");
}

YouWinWindow::~YouWinWindow()
{
    delete ui;
}

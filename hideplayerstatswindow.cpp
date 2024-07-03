#include "hideplayerstatswindow.h"
#include "ui_hideplayerstatswindow.h"

HidePlayerStatsWindow::HidePlayerStatsWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HidePlayerStatsWindow)
{
    ui->setupUi(this);
}

HidePlayerStatsWindow::~HidePlayerStatsWindow()
{
    delete ui;
}

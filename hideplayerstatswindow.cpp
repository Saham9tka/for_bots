#include "hideplayerstatswindow.h"
#include "ui_hideplayerstatswindow.h"

HidePlayerStatsWindow::HidePlayerStatsWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HidePlayerStatsWindow)
{
    ui->setupUi(this);

    QShortcut *shortcut = new QShortcut(QKeySequence(Qt::Key_Escape), this);
    connect(shortcut, &QShortcut::activated, this, &HidePlayerStatsWindow::close);
}

HidePlayerStatsWindow::~HidePlayerStatsWindow()
{
    delete ui;
}

#include "happyaccident.h"
#include "ui_happyaccident.h"

HappyAccident::HappyAccident(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HappyAccident)
{
    ui->setupUi(this);
}

HappyAccident::~HappyAccident()
{
    delete ui;
}

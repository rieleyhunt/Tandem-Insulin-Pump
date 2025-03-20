#include "InsulinGauge.h"
#include "ui_insulingauge.h"

InsulinGauge::InsulinGauge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::InsulinGauge)
{
    ui->setupUi(this);

    ui->InsulinLevel->setText("This is the insulin level");
}

InsulinGauge::~InsulinGauge()
{
    delete ui;
}

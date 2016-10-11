#include "eyesrelaxwidget.h"
#include "ui_eyesrelaxwidget.h"

EyesRelaxWidget::EyesRelaxWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EyesRelaxWidget)
{
    ui->setupUi(this);
}

EyesRelaxWidget::~EyesRelaxWidget()
{
    delete ui;
}

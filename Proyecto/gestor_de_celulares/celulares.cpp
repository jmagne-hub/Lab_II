#include "celulares.h"
#include "ui_celulares.h"

celulares::celulares(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::celulares)
{
    ui->setupUi(this);
}

celulares::~celulares()
{
    delete ui;
}

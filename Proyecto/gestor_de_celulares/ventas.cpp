#include "ventas.h"
#include "ui_ventas.h"

ventas::ventas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventas)
{
    ui->setupUi(this);
}

ventas::~ventas()
{
    delete ui;
}

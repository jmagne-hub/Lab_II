#include "usuarios.h"
#include "ui_usuarios.h"

usuarios::usuarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usuarios)
{
    ui->setupUi(this);
}

usuarios::~usuarios()
{
    delete ui;
}

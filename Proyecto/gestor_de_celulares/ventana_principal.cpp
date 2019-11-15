#include "ventana_principal.h"
#include "ui_ventana_principal.h"

ventana_principal::ventana_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ventana_principal)
{
    ui->setupUi(this);
}

ventana_principal::~ventana_principal()
{
    delete ui;
}


void ventana_principal::on_radioButton_clicked(bool checked)
{
    if(checked){
    ui->line_con->setEchoMode(QLineEdit::Normal);

    }
    else {
    ui->line_con->setEchoMode(QLineEdit::Password);
    }
}

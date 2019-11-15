#ifndef VENTAS_H
#define VENTAS_H

#include <QDialog>

namespace Ui {
class ventas;
}

class ventas : public QDialog
{
    Q_OBJECT

public:
    explicit ventas(QWidget *parent = nullptr);
    ~ventas();

private:
    Ui::ventas *ui;
    char nombre[30];
    char apellido[30];
    char marca[30];
    char modelo[10];
    int cantidad;
    float precio;
    float total;
    int medio_de_pago;
};

#endif // VENTAS_H

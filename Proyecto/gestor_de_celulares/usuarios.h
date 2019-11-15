#ifndef USUARIOS_H
#define USUARIOS_H

#include <QDialog>

namespace Ui {
class usuarios;
}

class usuarios : public QDialog
{
    Q_OBJECT

public:
    explicit usuarios(QWidget *parent = nullptr);

private:
    Ui::usuarios *ui;
    char nombre[30];
    char apellido[30];
    int DNI;
    float sueldo;
    char usuario[30];
    char contrasenia[30];
    bool estado=true;
};

#endif // USUARIOS_H

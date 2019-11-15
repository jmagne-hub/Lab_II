#ifndef CELULARES_H
#define CELULARES_H

#include <QDialog>

namespace Ui {
class celulares;
}

class celulares : public QDialog
{
    Q_OBJECT

public:
    explicit celulares(QWidget *parent = nullptr);
    ~celulares();

private:
    Ui::celulares *ui;
    char marca[30];
    char modelo[10];
    int memoria_int;
    int memoria_ram;
    int mp_delantero;
    int mp_trasera;
    int stock;
    float precio;
    bool huella=true;
    bool estado=true;
};

#endif // CELULARES_H

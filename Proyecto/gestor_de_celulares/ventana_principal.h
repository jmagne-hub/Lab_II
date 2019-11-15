#ifndef VENTANA_PRINCIPAL_H
#define VENTANA_PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ventana_principal; }
QT_END_NAMESPACE

class ventana_principal : public QMainWindow
{
    Q_OBJECT

public:
    ventana_principal(QWidget *parent = nullptr);
    ~ventana_principal();

private slots:
    void on_radioButton_clicked(bool checked);

private:
    Ui::ventana_principal *ui;
};
#endif // VENTANA_PRINCIPAL_H

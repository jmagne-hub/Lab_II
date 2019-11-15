/********************************************************************************
** Form generated from reading UI file 'ventana_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_PRINCIPAL_H
#define UI_VENTANA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana_principal
{
public:
    QWidget *centralwidget;
    QLineEdit *line_usu;
    QLineEdit *line_con;
    QRadioButton *radioButton;
    QPushButton *iniciar_sesion;
    QPushButton *cancelar;
    QLabel *usuario;
    QLabel *contrasena;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ventana_principal)
    {
        if (ventana_principal->objectName().isEmpty())
            ventana_principal->setObjectName(QString::fromUtf8("ventana_principal"));
        ventana_principal->resize(527, 348);
        centralwidget = new QWidget(ventana_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line_usu = new QLineEdit(centralwidget);
        line_usu->setObjectName(QString::fromUtf8("line_usu"));
        line_usu->setGeometry(QRect(200, 110, 113, 20));
        line_con = new QLineEdit(centralwidget);
        line_con->setObjectName(QString::fromUtf8("line_con"));
        line_con->setGeometry(QRect(200, 160, 113, 20));
        line_con->setEchoMode(QLineEdit::Password);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(200, 180, 131, 17));
        iniciar_sesion = new QPushButton(centralwidget);
        iniciar_sesion->setObjectName(QString::fromUtf8("iniciar_sesion"));
        iniciar_sesion->setGeometry(QRect(180, 210, 75, 23));
        cancelar = new QPushButton(centralwidget);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(270, 210, 75, 23));
        usuario = new QLabel(centralwidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setGeometry(QRect(200, 90, 47, 13));
        contrasena = new QLabel(centralwidget);
        contrasena->setObjectName(QString::fromUtf8("contrasena"));
        contrasena->setGeometry(QRect(200, 140, 61, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 295, 81, 31));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        ventana_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ventana_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 527, 21));
        ventana_principal->setMenuBar(menubar);

        retranslateUi(ventana_principal);
        QObject::connect(cancelar, SIGNAL(clicked()), ventana_principal, SLOT(close()));

        QMetaObject::connectSlotsByName(ventana_principal);
    } // setupUi

    void retranslateUi(QMainWindow *ventana_principal)
    {
        ventana_principal->setWindowTitle(QApplication::translate("ventana_principal", "ventana_principal", nullptr));
        radioButton->setText(QApplication::translate("ventana_principal", "Mostrar contrase\303\261a", nullptr));
        iniciar_sesion->setText(QApplication::translate("ventana_principal", "Iniciar sesion", nullptr));
        cancelar->setText(QApplication::translate("ventana_principal", "Cancelar", nullptr));
        usuario->setText(QApplication::translate("ventana_principal", "Usuario", nullptr));
        contrasena->setText(QApplication::translate("ventana_principal", "Contrase\303\261a", nullptr));
        label->setText(QApplication::translate("ventana_principal", "\302\256 Graus corp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana_principal: public Ui_ventana_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_PRINCIPAL_H

/********************************************************************************
** Form generated from reading UI file 'registrousuarios.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROUSUARIOS_H
#define UI_REGISTROUSUARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistroUsuarios
{
public:
    QAction *actionSalir;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtUsuario;
    QLineEdit *txtPassword;
    QPushButton *btnRegistrar;
    QMenuBar *menubar;
    QMenu *menuOpciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegistroUsuarios)
    {
        if (RegistroUsuarios->objectName().isEmpty())
            RegistroUsuarios->setObjectName(QString::fromUtf8("RegistroUsuarios"));
        RegistroUsuarios->resize(320, 355);
        RegistroUsuarios->setMinimumSize(QSize(320, 355));
        RegistroUsuarios->setMaximumSize(QSize(320, 355));
        actionSalir = new QAction(RegistroUsuarios);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        centralwidget = new QWidget(RegistroUsuarios);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 301, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 57, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 57, 14));
        txtUsuario = new QLineEdit(centralwidget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(80, 100, 231, 22));
        txtPassword = new QLineEdit(centralwidget);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(80, 130, 231, 22));
        btnRegistrar = new QPushButton(centralwidget);
        btnRegistrar->setObjectName(QString::fromUtf8("btnRegistrar"));
        btnRegistrar->setGeometry(QRect(230, 160, 80, 22));
        RegistroUsuarios->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistroUsuarios);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 19));
        menuOpciones = new QMenu(menubar);
        menuOpciones->setObjectName(QString::fromUtf8("menuOpciones"));
        RegistroUsuarios->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistroUsuarios);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegistroUsuarios->setStatusBar(statusbar);

        menubar->addAction(menuOpciones->menuAction());
        menuOpciones->addAction(actionSalir);

        retranslateUi(RegistroUsuarios);

        QMetaObject::connectSlotsByName(RegistroUsuarios);
    } // setupUi

    void retranslateUi(QMainWindow *RegistroUsuarios)
    {
        RegistroUsuarios->setWindowTitle(QCoreApplication::translate("RegistroUsuarios", "MainWindow", nullptr));
        actionSalir->setText(QCoreApplication::translate("RegistroUsuarios", "Salir", nullptr));
        label->setText(QCoreApplication::translate("RegistroUsuarios", "<html><head/><body><p>Bienvenido</p><p>Ingresa los datos solicitados.</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RegistroUsuarios", "Usuario", nullptr));
        label_3->setText(QCoreApplication::translate("RegistroUsuarios", "Password", nullptr));
        btnRegistrar->setText(QCoreApplication::translate("RegistroUsuarios", "Registrar", nullptr));
        menuOpciones->setTitle(QCoreApplication::translate("RegistroUsuarios", "Opciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroUsuarios: public Ui_RegistroUsuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROUSUARIOS_H
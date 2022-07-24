/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label1;
    QPushButton *btnInicio;
    QLineEdit *txtUsuario;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtPassword;
    QLabel *lbResultado;
    QPushButton *btnSalir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(298, 331);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(0, 10, 291, 61));
        label1->setAlignment(Qt::AlignCenter);
        btnInicio = new QPushButton(centralwidget);
        btnInicio->setObjectName(QString::fromUtf8("btnInicio"));
        btnInicio->setGeometry(QRect(210, 170, 80, 22));
        txtUsuario = new QLineEdit(centralwidget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(90, 110, 201, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 110, 57, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 140, 71, 16));
        txtPassword = new QLineEdit(centralwidget);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(90, 140, 201, 22));
        txtPassword->setEchoMode(QLineEdit::Password);
        lbResultado = new QLabel(centralwidget);
        lbResultado->setObjectName(QString::fromUtf8("lbResultado"));
        lbResultado->setGeometry(QRect(10, 200, 281, 81));
        lbResultado->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnSalir = new QPushButton(centralwidget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setGeometry(QRect(210, 200, 80, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 298, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Bienvenido</p><p>Inicia sesi\303\263n para continuar</p></body></html>", nullptr));
        btnInicio->setText(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        txtPassword->setInputMask(QString());
        lbResultado->setText(QString());
        btnSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QAction *actionSalir;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtUsuario;
    QLineEdit *txtPassword;
    QPushButton *btnIniciar;
    QLabel *lbResult;
    QPushButton *btnRegistrar;
    QMenuBar *menubar;
    QMenu *menuOpciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 355);
        MainWindow->setMinimumSize(QSize(320, 355));
        MainWindow->setMaximumSize(QSize(320, 355));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 321, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 57, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 140, 57, 14));
        txtUsuario = new QLineEdit(centralwidget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setGeometry(QRect(80, 110, 221, 22));
        txtPassword = new QLineEdit(centralwidget);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(80, 140, 221, 22));
        txtPassword->setEchoMode(QLineEdit::Password);
        btnIniciar = new QPushButton(centralwidget);
        btnIniciar->setObjectName(QString::fromUtf8("btnIniciar"));
        btnIniciar->setGeometry(QRect(220, 170, 80, 22));
        lbResult = new QLabel(centralwidget);
        lbResult->setObjectName(QString::fromUtf8("lbResult"));
        lbResult->setGeometry(QRect(10, 210, 291, 101));
        btnRegistrar = new QPushButton(centralwidget);
        btnRegistrar->setObjectName(QString::fromUtf8("btnRegistrar"));
        btnRegistrar->setGeometry(QRect(130, 170, 80, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 19));
        menuOpciones = new QMenu(menubar);
        menuOpciones->setObjectName(QString::fromUtf8("menuOpciones"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpciones->menuAction());
        menuOpciones->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sistema", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Bienvenido</p><p>Inicia sesi\303\263n para continuar</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        lbResult->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        btnRegistrar->setText(QCoreApplication::translate("MainWindow", "Registrar", nullptr));
        menuOpciones->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

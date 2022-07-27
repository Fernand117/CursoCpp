#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include "QPgSqlConn.h"
#include "registrousuarios.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnIniciar_clicked()
{
    QString us = ui->txtUsuario->text();
    QString ps = ui->txtPassword->text();
    QString res;

    QSqlQuery query("select * from usuarios where usuario = '" + us + "' and password = '" + ps + "' ", getConnectionQSql());

    while (query.next()) {
        res = query.value(2).toString();
    }

    getConnectionQSql().close();

    if(res.isEmpty())
    {
        QMessageBox::information(this, "Adevertencia", "Este usuario no existe en nuestra base de datos.");
    }
    else
    {
        QMessageBox::information(this, "Advertencia", "Resultado encontrado.");
        ui->lbResult->setText(ui->lbResult->text() + " " + res);
    }
}

void MainWindow::on_actionSalir_triggered()
{
    MainWindow::close();
}

void MainWindow::on_btnRegistrar_clicked()
{
    RegistroUsuarios *registro = new RegistroUsuarios();
    registro->show();
}

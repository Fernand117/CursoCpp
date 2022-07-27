#include "registrousuarios.h"
#include "ui_registrousuarios.h"
#include "QPgSqlConn.h"
#include <QMessageBox>
#include <QtSql/QSqlQuery>

RegistroUsuarios::RegistroUsuarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegistroUsuarios)
{
    ui->setupUi(this);
}

RegistroUsuarios::~RegistroUsuarios()
{
    delete ui;
}

void RegistroUsuarios::on_actionSalir_triggered()
{
    RegistroUsuarios::close();
}


void RegistroUsuarios::on_btnRegistrar_clicked()
{
    QString us = ui->txtUsuario->text();
    QString ps = ui->txtPassword->text();
    QString res;

    QSqlQuery query("insert into usuarios values ('" + us + "','" + ps + "')", getConnectionQSql());

    while (query.next()) {
        res = query.value(0).toString();
    }

    getConnectionQSql().close();
}


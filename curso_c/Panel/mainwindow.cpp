#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MySqlConnection.h"

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
    MYSQL_RES *res;
    MYSQL_ROW row;

    std::string usuario;
    char *query;

    std::string pq = "select * from usuarios where usuario = '";
    std::string exq = ui->txtUsuario->text().toStdString().c_str();
    std::string fq = "'";

    std::string q = pq + exq + fq;
    query = q.c_str();

    res = mysqlPerformQuery(getConnectionResult(), query);
    printf("MySQL Tables in mysql database:\n");
    while ((row = mysql_fetch_row(res)) !=NULL)
        usuario = row[1];

    ui->lbResult->setText(usuario.c_str());

    mysql_free_result(res);
    mysql_close(getConnectionResult());
}


void MainWindow::on_actionSalir_triggered()
{
    MainWindow::close();
}


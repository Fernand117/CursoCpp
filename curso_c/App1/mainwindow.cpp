#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "UsuarioModel.h"

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

void MainWindow::on_btnInicio_clicked()
{
    UsuarioModel usuarioModel;

    usuarioModel.setUsuario(ui->txtUsuario->text().toStdString());
    usuarioModel.setPassword(ui->txtPassword->text().toStdString());

    std::string resultado = "Usuario: " + usuarioModel.getUsuario() + "\nContraseña: " + usuarioModel.setPassword();
    ui->lbResultado->setText(QString::fromStdString(resultado));
}

void MainWindow::on_btnSalir_clicked()
{
    MainWindow::close();
}


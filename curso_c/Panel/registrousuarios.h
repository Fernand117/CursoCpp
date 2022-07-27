#ifndef REGISTROUSUARIOS_H
#define REGISTROUSUARIOS_H

#include <QMainWindow>

namespace Ui {
class RegistroUsuarios;
}

class RegistroUsuarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegistroUsuarios(QWidget *parent = nullptr);
    ~RegistroUsuarios();

private slots:
    void on_actionSalir_triggered();

    void on_btnRegistrar_clicked();

private:
    Ui::RegistroUsuarios *ui;
};

#endif // REGISTROUSUARIOS_H

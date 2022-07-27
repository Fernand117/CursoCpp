#ifndef USUARIOSMODEL_H
#define USUARIOSMODEL_H

#include <iostream>
#include <string>

class UsuariosModel
{
public:
    void setUsuario(std::string getUsuario)
    {
        usuario = getUsuario;
    }

    std::string getUsuario()
    {
        return usuario;
    }

    void setPassword(std::string getPassword)
    {
        password = getPassword;
    }

    std::string getPassword()
    {
        return password;
    }
private:
    std::string usuario;
    std::string password;
};

#endif // USUARIOSMODEL_H

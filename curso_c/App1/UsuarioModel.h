#include <iostream>
#include <string>

#ifndef USUARIOMODEL_H
#define USUARIOMODEL_H
class UsuarioModel
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

    std::string setPassword()
    {
        return password;
    }

private:
    std::string usuario;
    std::string password;
};

#endif // USUARIOMODEL_H

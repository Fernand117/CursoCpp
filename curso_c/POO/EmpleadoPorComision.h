/*
    La definición de la clase EmpleadoPorComision representa a un empleado por comisión.
*/

#ifndef COMISION_H
#define COMISION_H

#include <string>

class EmpleadoPorComision
{
public:
    EmpleadoPorComision(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);
    
    void establecerPrimerNombre(const std::string &);
    std::string obtenerPrimerNombre() const;

    void establecerPrimerApellido(const std::string &);
    std::string obtenerPrimerApellido() const;

    void establecerNumeroSeguridadSocial(const std::string &);
    std::string obtenerNumeroSeguridadSocial() const;

    void establecerVentasBrutas(double);
    double obtenerVentasBrutas() const;

    void establecerTarifaComision(double);
    double obtenerTarifaComision() const;

    double ingresos() const;
    void imprimir() const;

private:
    std::string primerNombre;
    std::string primerApellido;
    std::string numeroSeguridadSocial;
    double ventasBrutas;
    double tarifaComision;
};
#endif
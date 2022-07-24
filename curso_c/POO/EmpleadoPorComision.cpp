// Definición de las funciones miembro de la clase EmpleadosPorComision

#include <iostream>
#include <stdexcept>
#include "EmpleadoPorComision.h"

using namespace std;

EmpleadoPorComision::EmpleadoPorComision(const string &nombre, const string &apellido, const string &nss, double ventas, double tarifa){
    primerNombre = nombre;
    primerApellido = apellido;
    numeroSeguridadSocial = nss;
    establecerVentasBrutas(ventas);
    establecerTarifaComision(tarifa);
}

void EmpleadoPorComision::establecerPrimerNombre(const string &nombre)
{
    primerNombre = nombre;
}

string EmpleadoPorComision::obtenerPrimerNombre() const
{
    return primerNombre;
}

void EmpleadoPorComision::establecerPrimerApellido(const string &apellido)
{
    primerApellido = apellido;
}

string EmpleadoPorComision::obtenerPrimerApellido() const
{
    return primerApellido;
}

void EmpleadoPorComision::establecerNumeroSeguridadSocial(const string &nss)
{
    numeroSeguridadSocial = nss;
}

string EmpleadoPorComision::obtenerNumeroSeguridadSocial() const
{
    return numeroSeguridadSocial;
}

void EmpleadoPorComision::establecerVentasBrutas(double ventas)
{
    if(ventas >= 0.0)
    {
        ventasBrutas = ventas;
    }
    else
    {
        throw invalid_argument("Las ventas brutas deben ser >= 0.0");
    }
}

double EmpleadoPorComision::obtenerVentasBrutas() const
{
    return ventasBrutas;
}

void EmpleadoPorComision::establecerTarifaComision(double tarifa)
{
    if(tarifa > 0.0 && tarifa < 1.0)
        tarifaComision = tarifa;
    else
        throw invalid_argument("Las ventas brutas deben ser >= 0.0 y < 1.0");
}

double EmpleadoPorComision::obtenerTarifaComision() const
{
    return tarifaComision;
}

double EmpleadoPorComision::ingresos() const
{
    return tarifaComision * ventasBrutas;
}

void EmpleadoPorComision::imprimir() const
{
    cout << "Empleado por comision: " << primerNombre << ' ' << primerApellido
         << "\nNumero de seguro social: " << numeroSeguridadSocial
         << "\nVentas brutas: " << ventasBrutas
         << "\nTarifa de comision: " << tarifaComision << endl;
}
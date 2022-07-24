// Prueba de la clase EmpleadoPorComision.

#include <iostream>
#include <iomanip>
#include "EmpleadoPorComision.h"

using namespace std;

int main()
{
    EmpleadoPorComision empleado(
        "Fernando", "Leyva", "222.22.222", 10000, .06
    );

    cout << fixed << setprecision(2);

    cout << "Información del empleado obtenida por las funciones obtener:\n"
         << "\nEl primer nombre es: " << empleado.obtenerPrimerNombre()
         << "\nEl primer apellido es: " << empleado.obtenerPrimerApellido()
         << "\nEl numero de seguro social es: " << empleado.obtenerNumeroSeguridadSocial()
         << "\nLas ventas brutas son: " << empleado.obtenerVentasBrutas()
         << "\nLa tarifa de comision es: " << empleado.obtenerTarifaComision() << endl;
    
    empleado.establecerVentasBrutas(8500);
    empleado.establecerTarifaComision(.1);

    cout << "\nInformación actualizada del empleado, mostrada por la función imprimir: \n" << endl;
    empleado.imprimir();
    cout << "\n\nIngresos del empleado: $" << empleado.ingresos() << endl;
    return 0;
}
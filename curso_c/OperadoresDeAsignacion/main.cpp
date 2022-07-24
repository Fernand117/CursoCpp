/*
    Demostración de la clase LibroCalificaciones después de separar
    su interfaz de su implementación.
*/

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("Fundamentos de programación.");
    libroCalificaciones1.mostrarMensaje();
    libroCalificaciones1.determinarPromedioClase();

    return 0;
}
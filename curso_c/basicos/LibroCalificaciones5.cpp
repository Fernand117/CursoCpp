// Inclusión de la clase LibroCalificaciones.h para usarla en main.

#include <iostream>
#include "LibroCalificaciones5.h"

using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("Fundamentos de programación.");
    LibroCalificaciones libroCalificaciones2("Programación orientada a objetos");

    cout << "Libro de calificaciones 1 creado para el curso " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "Libro de calificaciones 2 creado para el curso " << libroCalificaciones2.obtenerNombreCurso() << endl;

    return 0;
}
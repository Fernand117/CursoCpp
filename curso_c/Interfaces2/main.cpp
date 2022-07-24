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
    LibroCalificaciones libroCalificaciones2("Estructuras de datos.");

    cout << "Libro de calificaciones 1 creado para el curso " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "Libro de calificaciones 2 creado para el curso " << libroCalificaciones2.obtenerNombreCurso() << endl;

    libroCalificaciones1.establecerNombreCurso("Patrones de diseño de software.");

    cout << "Libro de calificaciones 1 creado para el curso " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "Libro de calificaciones 2 creado para el curso " << libroCalificaciones2.obtenerNombreCurso() << endl;

    return 0;
}
/*
    Implementación de las definiciones de las funciones miembro de LibroCalificaciones.
    La función establecerNombreCurso realiza la validación.
*/

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre) : nombreCurso(nombre)
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if(nombre.size() <= 25)
        nombreCurso = nombre;
    
    if(nombre.size() >= 25)
    {
        nombreCurso = nombre.substr(0, 25);
        cerr << "El nombre / '" << nombre << "' excede la longitud maxima(25)." << endl;
        cout << "Se limito nombreCurso a los primeros 25 caracteres." << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << endl;
}
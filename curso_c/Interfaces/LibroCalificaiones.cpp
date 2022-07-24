/*
    Definiciones de las funciones miembro de LibroCalificaciones. Este archivo
    contiene implementaciones de las funciones miembro cuyo prototipo está en LibroCalificaciones.h
*/

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre) : nombreCurso(nombre)
{
    // Inicializamos contructor vacío
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << endl;
}
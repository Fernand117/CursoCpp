/*
    Definición de la clase LibroCalificaciones. Este archivo presenta la interfaz
    public de LibroCalificaciones sin revelar las implementaciones de sus funciones
    miembro, que están definidas en LibroCalificaciones.cpp
*/

#include <string>

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string);
    
    void establecerNombreCurso(std::string);
    std::string obtenerNombreCurso() const;
    void mostrarMensaje() const;

private:
    std::string nombreCurso;
};
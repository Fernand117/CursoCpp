// Definición de la clase LibroCalificaciones en un archivo separado de main.
// Los achivos .h (head) son de encabezado y se utilizan en POO

#include <iostream>
#include <string>

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string nombre) : nombreCurso(nombre)
    {
        // Inicializamos el constructor vacío.
    }

    void establecerNombreCurso(std::string nombre)
    {
        nombreCurso = nombre;
    }

    std::string obtenerNombreCurso() const
    {
        return nombreCurso;
    }

    void mostrarMensaje() const
    {
        std::cout << "Bienvenido al libro de calificaciones para: " << obtenerNombreCurso() << std::endl;
    }

private:
    std::string nombreCurso;
};
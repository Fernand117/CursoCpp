// Definición de una clase con una función miembro
// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje

#include <iostream>

using namespace std;

class LibroCalificaciones
{
public:
    void mostrarMensaje() const
    {
        cout << "Bienvenido al Libro de Calificaciones." << endl;
    }
};

int main()
{
    LibroCalificaciones libroCalificaciones;
    libroCalificaciones.mostrarMensaje();
    return 0;
}
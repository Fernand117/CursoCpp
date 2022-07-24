// Definición de una función miembro con un parámetro
// Define la clase LibroCalificaciones con una función miembro que recibe un parámetro
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje

#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    void mostrarMensaje(string nombreCurso) const
    {
        cout << "Bienvenido al Libro de Calificaciones para: " << nombreCurso << endl;
    }
};

int main()
{
    string nombreDelCurso;

    LibroCalificaciones libroCalificaciones;
    
    cout << "Ingrese el nombre del curso: " << endl;
    getline(cin, nombreDelCurso);
    cout << endl;

    libroCalificaciones.mostrarMensaje(nombreDelCurso);
    return 0;
}
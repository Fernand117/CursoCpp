// Definición de una función miembro con un parámetro
// Definición de la clase LibroCalificaciones que contiene un miembro de datos nombreCurso y funciones miembro para establecer y obtener su valor
// Crea y manipula un objeto LibroCalificaciones con esas funciones
#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    void establecerNombreCurso(string nombre)
    {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() const
    {
        return nombreCurso;
    }

    void mostrarMensaje() const
    {
        cout << "Bienvenido al Libro de Calificaciones para: " << obtenerNombreCurso() << endl;
    }
private:
    string nombreCurso;
};

int main()
{
    string nombreDelCurso;

    LibroCalificaciones libroCalificaciones;

    cout << "El nombre inicial del curso es: " << libroCalificaciones.obtenerNombreCurso() << endl;
    
    cout << "Ingrese el nombre del curso: " << endl;
    getline(cin, nombreDelCurso);
    libroCalificaciones.establecerNombreCurso(nombreDelCurso);
    cout << endl;

    libroCalificaciones.mostrarMensaje();
    return 0;
}
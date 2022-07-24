// Creación de instancias de varios objetos de la clase LibroCalificaciones y uso de su constructor paar especificar el nombre del curso cuando se crea cada objeto libroCalificaciones.
#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    // Definición del constructor de la clase
    // El constructor inicializa a nombreCurso con la cadena que se suminstra como argumento
    explicit LibroCalificaciones(string nombre) : nombreCurso(nombre) // Inicializador de miembro para inicializar nombreCurso
    {
        //cuerpo vacío del constructor
    }

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
    LibroCalificaciones libroCalificaciones1("Fundamentos de programación.");
    LibroCalificaciones libroCalificaciones2("Estructuras de datos.");

    cout << "El libro de calificaciones 1 se creo para el curso: " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "El libro de calificaciones 2 se creo para el curso: " << libroCalificaciones2.obtenerNombreCurso() << endl;
    return 0;
}
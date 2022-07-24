// Suma de dos números
#include <iostream>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int suma = 0;

    std::cout << "Escriba el primer numero ";
    std::cin >> numero1;

    std::cout << "Escriba el segundo numero ";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << "La suma de los números es " << suma << std::endl;
    return 0;
}
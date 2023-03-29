// 2023_03_29_005_EControl.cpp
// Dayanare Ruiz
// Estructuras de control
// Decisiones
// Bucles

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    // Estructura de control 1
    // IF
    // Syntaxis
    
    int edad = 0;
    std::cout << "¿Qué edad tienes?" << std::endl;
    std::cin >> edad;

    if (edad >= 18)
    {
        std::cout << "Vaya al club de los pequeñines" << std::endl;
    }
    if (edad < 18)
    {
        std::cout << "Vaya al club de los adultos" << std::endl;
    }

    // IF ELSE
    // Syntaxis

    float temperatura = 0;
    std::cout << "¿Cuántos grados centígrados tienes de temperatura? \n";
    std::cin >> temperatura;
    if (temperatura >= 36 && temperatura <= 38)
    {
        std::cout << "Usted está en perfectas condiciones. \n";
    }
    else
    {
        std::cout << "Si sigue consciente, vaya al médico. \n";
    }

    // Switch case
    // Syntaxis

    int opc = 0;
    std::cout << "Hola, usuario. Presiona una tecla del 1 al 4 para leer la frase de tu personaje favorito \n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Súper\n";
        break;

    case 2:
        std::cout << "Detrás de ti, imbécil\n";
        break;
    
    case 3:
        std::cout << "Yuju\n";
        break;

    case 4:
        std::cout << "Holi\n";
        break;

    case 5:
        std::cout << "La vida es un riesgo\n";
        break;
    }

}

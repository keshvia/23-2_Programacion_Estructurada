// 2023_03_15_002_HMOPVAR_V1.cpp :
// Karen Ruiz
// Hola mundo, variables, operadores aritméticos

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "¡Hola, \nmundo!" << std::endl; // Comunicarnos con el usuario
    // con Cout nos comunicamos con el usuario
    // con \n y con std::endl se da un salto de línea

    std::cout << "Hola, tú." << std::endl;
    //Tipos de variables: bool, int, float, char, string
    //Sintaxis para nombrar variables
    //Tipo de variable - Nombre de la variable - Inicialización

    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Karen";
    std::string namertag = "keshvia";

    // << significa concatenar o sumar textos

    std::cout << "Hola, " << nombre << ". Te doy la bienvenida al mundo de " << namertag << ".";
    std::cout << std::endl;

    //Operadores aritméticos
    // +, -, *, /, ^, 

    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu Vida_Aux restante es: " << Vida_Aux << std::endl;

} 
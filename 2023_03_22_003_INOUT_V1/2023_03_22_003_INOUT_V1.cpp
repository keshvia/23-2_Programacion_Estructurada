// 2023_03_22_003_INOUT_V1.cpp :
// Dayanare Ruiz
// En este programa aprenderé a usar bibliotecas
// Reforzaremos el hablar con el usuario
// Recibiremos datos del usuario

#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");


	int n_tacos = 0;

	std::cout << "¡Bienvenido a tu programa!\n";

	bool pregunta = false;
	std::cout << "Lee y responde con verdadero o falso.\n" <<
		"¿Anoche cenaste tacos al pastor? 1) Sí 0) No" << std::endl;

	// Aquí se recibe la respuesta del usuario
	
	std::cin >> pregunta;

	std::cout << "Ya veo entonces que comiste " << pregunta << " tacos." <<
		std::endl;

	std::cout << "¿Cuántos tacos?" << std::endl;
	std::cin >> n_tacos;
	std::cout << "Ah, entonces te comiste " << n_tacos << "." << std::endl;

	bool pregunta_2 = true;
	std::cout << "¿Cómo que no cenaste tacos? Qué aburrido.";



}
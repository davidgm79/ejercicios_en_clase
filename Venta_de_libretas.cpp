#include <iostream>
using namespace std;

int main() {
	int Edad, Nivel_sisben;
	float Costo_libreta = 0;

	cout << "Porfavor ingrese su edad: " << endl;
	cin >> Edad;

	cout << "Ingrese su nivel del sisben (1, 2. 3 u otro nivel)" << endl;
	cin >> Nivel_sisben;

	if (Edad > 18)
	{
		Costo_libreta = 350000;
	}

	if (Nivel_sisben == 1)
	{
		Costo_libreta = Costo_libreta * 0.4;
	}

	else if (Nivel_sisben == 2)
	{
		Costo_libreta = Costo_libreta * 0.3;
	}

	else if (Nivel_sisben == 3)
	{
		Costo_libreta = Costo_libreta * 0.15;
	}

	else if (Edad == 18)
	{
		Costo_libreta = 200000;
	}

	if (Nivel_sisben == 1)
	{
		Costo_libreta = Costo_libreta * 0.6;
	}

	else if (Nivel_sisben == 2)
	{
		Costo_libreta = Costo_libreta * 0.4;
	}

	else if (Nivel_sisben == 3)
	{
		Costo_libreta = Costo_libreta * 0.2;
	}

	cout << "El costo de su libreta militar es " << Costo_libreta << " pesos." << endl;
}
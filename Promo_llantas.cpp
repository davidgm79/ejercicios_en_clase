#include <iostream>
using namespace std;

int main() {
	int Precio;
	int Precio_total;
	int Cantidad;

	cout << "Bienvenido a llantera las morenas, porfavor ingrese la cantidad de llantas que desea llevar: " << endl;
	cin >> Cantidad;

	if (Cantidad < 5)
	{
		Precio = 300;
		Precio_total = Cantidad * Precio;
		cout << "Usted llevo " << Cantidad << " unidades de michelin x in city en medidas 295/80 rin 22.5 pulgadas, su valor es: " << Precio_total << endl;
	}

	if (Cantidad > 5 && Cantidad <= 10)
	{
		Precio = 200;
		Precio_total = Cantidad * Precio;
		cout << "Usted llevo " << Cantidad << " unidades de michelin x in city en medidas 295/80 rin 22.5 pulgadas, su valor es: " << Precio_total << endl;
	}

	if (Cantidad > 10)
	{
		Precio = 130;
		Precio_total = Cantidad * Precio;
		cout << "Usted llevo " << Cantidad << " unidades de michelin x in city en medidas 295/80 rin 22.5 pulgadas, su valor es: " << Precio_total << endl;
	}
}
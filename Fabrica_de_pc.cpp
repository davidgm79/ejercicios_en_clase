#include <iostream>
using namespace std;

int main() {
	int Precio_pc;
	int Cantidad_pc;
	float Descuento;

	cout << "bienvenido a clones clones y perifericos, porfavor ingrese la cantidad de productos que desa llevar" << endl;
	cin >> Cantidad_pc;

	Precio_pc = Cantidad_pc * 11000;

	if (Cantidad_pc < 5)
	{
		Descuento = Precio_pc * 0.10;
		cout << "Usted llevo " << Cantidad_pc << " unidades de computadores y su precio final es: " << Descuento << endl;
	}

	if (Cantidad_pc >= 5 && Cantidad_pc < 10)
	{
		Descuento = Precio_pc * 0.20;
		cout << "Usted llevo " << Cantidad_pc << " unidades de computadores y su precio final es: " << Descuento << endl;
	}

	if (Cantidad_pc >= 10)
	{
		Descuento = Precio_pc * 0.40;
		cout << "Usted llevo " << Cantidad_pc << " unidades de computadores y su precio final es: " << Descuento << endl;
	}
}
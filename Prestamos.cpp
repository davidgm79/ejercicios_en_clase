#include <iostream>
using namespace std;

int main() {
	string Nombre_cliente, Direccion, Telefono, Nombre_asesor;
	double Valor_prestamo, Porcentaje, Pago_quincenal, Total_pago, Saldo;

	cout << "Porfavor ingrese su nombre: " << endl;
	cin >> Nombre_cliente;

	cout << "Porfavor ingrese su direccion de residencia: " << endl;
	cin >> Direccion;

	cout << "Porfavor ingrese su numero de telefono: " << endl;
	cin >> Telefono;

	cout << "Porfavor ingrese el nombre del asesor que le atendio: " << endl;
	cin >> Nombre_asesor;

	cout << "Porfavor ingrese el valor que desea prestar: " << endl;
	cin >> Valor_prestamo;

	if (Valor_prestamo <= 120000)
	{
		Porcentaje = 0.03;
	}

	else if (Valor_prestamo > 200000 && Valor_prestamo < 350000)
	{
		Porcentaje = 0.10;
	}

	else if (Valor_prestamo >= 400000 && Valor_prestamo < 600000)
	{
		Porcentaje = 0.14;
	}

	else if (Valor_prestamo >= 600000 && Valor_prestamo < 900000)
	{
		Porcentaje = 0.25;
	}

	else
	{
		cout << "El monto ingresado excede el monto disponible a prestar." << endl;
	}

	Pago_quincenal = Valor_prestamo * Porcentaje * 15;
	Total_pago = Valor_prestamo + Pago_quincenal;
	Saldo = 150000 - Valor_prestamo;

	cout << "---------Vale de prestamo---------" << endl;
	cout << "Nombre del cliente: " << Nombre_cliente << endl;
	cout << "Direccion del cliente: " << Direccion << endl;
	cout << "Telefono del cliente: " << Telefono << endl;
	cout << "Nombre del asesor: " << Nombre_asesor << endl;
	cout << "Monto prestado: " << Valor_prestamo << endl;
	cout << "Usted debe pagar quincenalmente " << Pago_quincenal << " Pesos." << endl;
	cout << "El valor total a pagar es de " << Total_pago << " Pesos." << endl;
	cout << "Usted tiene un saldo disponible de: " << Saldo << " pesos." << endl;
	cout << "---Gracias por usar nuestro servicio de prestamo, que tenga un buen dia---" << endl;

}
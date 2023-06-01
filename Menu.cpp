#include <iostream>
using namespace std;

void Opcion1()
{
    system("cls");
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

void Opcion2()
{
    system("cls");
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

void Opcion3()
{
    system("cls");
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

void Opcion4()
{
    system("cls");
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

int main() {
    int opcion;

    do {
        cout << "=== Menu seleccione un ejercicio, para salir escriba 00.===\n";
        cout << "1. Descuentos en computadores\n";
        cout << "2. Prestamos\n";
        cout << "3. Promocion en llantera\n";
        cout << "4. Venta de libretas militares\n";
        cout << "00. Salir.\n";
        cout << "Ingrese el numero de opcion que desea seleccionar: ";
        cin >> opcion;

        switch (opcion) {
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        case 1:
            Opcion1();
            break;
        case 2:
            Opcion2();
            break;

        case 3:
            Opcion3();
            break;

        case 4:
            Opcion4();
            break;

        default:
            cout << "Opción inválida. Por favor, ingrese un número válido.\n";
            break;
        }

        cout << endl;

    } while (opcion != 0);
}
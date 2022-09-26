/*
Los tramos impositivos para la declaracion de la renta en un determinado pais son los siguientes:

Renta Tipos impositivo
Menos de $10,000 5%
Entre $10,000 y $20,000 15%
Entre $20,000 y $35,000 20%
Entre $35,000 y $60,000 30%
Mas de $60,000 45%

Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el tipo impositivo que le corresponde.
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso de mainspace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    double grande;
    float porcentaje;
    float impuestos;

    cout << "Ingrese el monto a pagar de renta anualmente: ";
    cin >> grande;

    if (grande >= 0) {
        porcentaje = 0.05;
    }
    else
    {
        grande <= 10000;
    }

    if (grande > 10000) {
        porcentaje = 0.15;
    }
    else
    {
        grande <= 20000;
    }
    
    if (grande > 20000) {
        porcentaje = 0.20;
    }
    else
    {
        grande <= 35000;
    }

    if (grande > 35000) {
        porcentaje = 0.30;
    }
    else
    {
        grande <= 60000;
    }

    if (grande > 60000) {
        porcentaje = 0.45;
    }
    cout << "Su impuesto es de: "<< porcentaje << endl;

    impuestos = grande*porcentaje;

    cout << "El monto de impuesto a pagar es: "<< impuestos << endl;

    return 0;
}
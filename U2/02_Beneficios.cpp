/*
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! Esperamos poder servirte nuevamente.
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso de mainspace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    double nivel;
    float pago;
    float cantidad;

    pago = 2400;

    cout << "Niveles de rendimiento:"<< endl;
    cout << "0.0"<< endl;
    cout << "0.4"<< endl;
    cout << "0.6 o mas..."<< endl;
    cout << "Indique su nivel de rendimiento: ";
    cin >> nivel;

    if ((nivel == 0.0) || (nivel == 0.4) || (nivel >= 0.6))
    {
        cantidad = pago*nivel;
        cout << "La cantidad que recibira es: $"<< cantidad << endl;
    }

    return 0;
}
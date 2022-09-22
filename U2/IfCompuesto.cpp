/*
Date: 22/09/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: 
Last Modification:
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso de mainspace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    int numero;
    int dato = 1;

    cout << "Ingresa un numero entero: ";
    cin >> numero ;
    if (numero == dato){
        cout <<"El numero es igual a dato \n"<< endl;
    }
    else(
        cout << "El numero es diferente del dato \n"<< endl
    );

    return 0;
}
/*
Date: 21/09/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: Entrada de datos
Last Modification:
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso de mainspace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
    int entero;       //%i numero
    float flotante;   //%f numeros con decimales
    double grande ;   //%d numeros muy grandes
    char caracter;    //%c letras

    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un tipo de dato de tipo entero ";
    cin >> entero;
    cout << "El dato ingresado es: "<< entero << endl;

    cout <<"===========" << endl;

    printf("Usando la funcion printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    printf("\n");
    printf("\n");

    //Al ser una funcion debe retornar un valor, en este caso 0
    return 0;
    
}
/*
Date: 21/09/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: Entrada de datos
Last Modification:
*/

#include <iostream>
using namespace std;
int main()
{
    int whole;
    float floating;
    double big;
    char character;

    cout << "This program shows the input of data by the user. \n";
    cout << "Enter an integer data type ";
    cin >> big;
    cout << "The data entered is: "<< whole << endl;

    cout <<"===========" << endl;

    printf("Using the function printf and scanf\n");
    printf("Enter an integer data type: ");
    scanf("%d", &whole);
    printf("The data entered is: %i \n", whole);

    printf("\n");
    printf("\n");

    return 0;
    
}
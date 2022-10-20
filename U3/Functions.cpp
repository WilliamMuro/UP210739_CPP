/*
Date: 10/20/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: Fuctions.
Last Modification: 
*/

#include <iostream>

using namespace std;

int getMaxWo(int num1, int num2);

int main(){
    int num1, num2;
    int worthMax;

    cout << "Give me a number: ";
    cin >> num1;
    cout << "Give me another number: ";
    cin >> num2;
    cout << endl;

    worthMax =getMaxWo(num1, num2);

    cout << "The maximum value is:" << worthMax << endl;
    return 0;
}

int getMaxWo(int num1, int num2){
    int worthMax;
    if (num1 > num2){
        worthMax = num1;
    }
    else
    {
        worthMax = num2;
    }

    return worthMax;
}
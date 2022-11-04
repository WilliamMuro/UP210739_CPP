/*
Date: 10/28/2022
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: 
Last Modification: 
*/

#include<iostream>

using namespace std;

int main()
{
    int row, col;

    int denominations[5][5];

    for(int row=0; row<5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "worth [" << row << "][" << col << "]: ";
            cin >> denominations[row][col];
        }
        
    }
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << denominations[row][col]<< " ";
        }
        cout << endl;
    }
   
   return 0;
}
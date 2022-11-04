/*
Date: 
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: 
Last Modification: 
*/

#include<iostream>

using namespace std;

int main()
{
    char catEst[6][11];
    
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (row%2==0 && (col!=3 || col!=7))
            {
                cout << " ";
            }
            else if (row%2==0 && (col==3 || col==7))
            {
                cout << "|";
            }
            
            
        }
        
    }
   
   return 0;
}
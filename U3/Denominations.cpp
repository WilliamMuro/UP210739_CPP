/*
Date: 10/27/22
Author: César William Muro Hernández
Email: up210739@alumnos.upa.edu.mx
Description: 
Last Modification: 
*/

#include<iostream>

using namespace std;

void cnahge (int);
void changecoins (int);
void printchange (string);

int fiveHundred = 0, twoHundred = 0, oneHundred = 0;
int fifty = 0, twenty  = 0;
int ten = 0, five = 0, two = 0, one = 0;

void changecoins (int cash)
{
    int counter = 0;

    do
    {
        (cash-10>=0)?ten++,cash=cash-10
        : (cash-5>=0)?five++,cash=cash-5
        : (cash-2>=0)?two++,cash=cash-2
        : (cash-1>=0)?one++,cash=cash-1
        : counter++;
    } while (counter==0);

}

void change (int cash)
{
    int counter = 0;

    do
    {
        (cash-500>=0)?fiveHundred++,cash=cash-500
        : (cash-200>=0)?twoHundred++,cash=cash-200
        : (cash-100>=0)?oneHundred++,cash=cash-100
        : (cash-50>=0)?fifty++,cash=cash-50
        : (cash-20>=0)?twenty++,cash=cash-20
        : counter++;
    } while (counter==0);

    changecoins (cash);

}

void printchange (string type)
{
    cout << "_________________________________"<< endl<< "|               |               |"<< endl;
    cout << "|" << "\t" << "$500"<< "\t" << "|" << "\t" << fiveHundred<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$200"<< "\t" << "|" << "\t" << twoHundred<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$100"<< "\t" << "|" << "\t" << oneHundred<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$50"<< "\t" << "|" << "\t" << fifty<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$20"<< "\t" << "|" << "\t" << twenty<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$10"<< "\t" << "|" << "\t" << ten<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$5"<< "\t" << "|" << "\t" << five<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$2"<< "\t" << "|" << "\t" << two<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
    cout << "|               |               |"<< endl<< "|" << "\t" << "$1"<< "\t" << "|" << "\t" << one<< "\t" << "|" << endl;
    cout << "|_______________|_______________|"<< endl;
}

int main()
{
        
    int money;

    cout << "   Money to enter: ";
    cin >> money;
    cout << endl;
    
    change (money);
    printchange ("");
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    double amount;
    float percentage;
    float taxes;

    cout << "Enter the amount to pay rent annually: ";
    cin >> amount;

    if (amount >= 0) {
        percentage = 0.05;
    }
    else
    {
        amount <= 10000;
    }

    if (amount > 10000) {
        percentage = 0.15;
    }
    else
    {
        amount <= 20000;
    }
    
    if (amount > 20000) {
        percentage = 0.20;
    }
    else
    {
        amount <= 35000;
    }

    if (amount > 35000) {
        percentage = 0.30;
    }
    else
    {
        amount <= 60000;
    }

    if (amount > 60000) {
        percentage = 0.45;
    }
    cout << "Your tax is: "<< percentage << endl;

    taxes = amount*percentage;

    cout << "The amount of tax to pay is: "<< taxes << endl;

    return 0;
}
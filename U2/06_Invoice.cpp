#include<iostream>

using namespace std;

int main()
{
    float quantity;
    float price;
    float invoice;
    float addition = 0;

    do
    {
        cout << "Quantity of products: ";
        cin >> quantity;
        cout << "Price of products: $";
        cin >> price;
        invoice = quantity*price;
        addition = addition + invoice;

    } while (quantity != 0);

    cout << "The total account is: "<< addition << endl;

    return 0;
    
}
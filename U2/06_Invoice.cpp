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
        cout << endl;
        invoice = quantity*price;
        addition += invoice;

    } while (quantity != 0);
    
    cout << endl;
    cout << "   The total account is: "<< addition << endl;
    cout << endl;

    return 0;
    
}
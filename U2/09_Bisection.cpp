#include <iostream>
#include <cmath>

using namespace std;

float solveEquation(float worth){
    return pow(worth, 2) - 1 * (worth) - 12;
}
int maint(){
    float a;
    float b;
    float c = (a+b)/2;
    float ya = solveEquation(a);
    float yb = solveEquation(b);
    float yc = solveEquation(c);

    cout << "Enter the value of (a): ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of (b): ";
    cin >> b;
    cout << endl;

    while (/* condition */)
    {
        /* code */
    }

    return 0;    
}
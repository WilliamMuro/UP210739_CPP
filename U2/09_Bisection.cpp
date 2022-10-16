#include <iostream>
#include <cmath>

using namespace std;

double solveEquation(float worth){
    return pow(worth,2)-worth-12;
}
int main(){
    double a;
    double b;
    double c;
    double ya;
    double yb;
    double yc;

    cout << "Enter the value of (a): ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of (b): ";
    cin >> b;
    cout << endl;
    do
    {
        ya = solveEquation(a);
        yb = solveEquation(b);
        if ((yb > 0 && ya < 0) || (ya > 0 && yb < 0))
        {
            c = (ya+yb)/2;
            yc = ya;
            cout << c;
        }
        else{
            cout << "Numbers without roots.";
            break;
        }
        
    } while (yc<=-0.01 || yc>=0.01);

    return 0;    
}
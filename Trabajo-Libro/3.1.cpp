#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, h;
    cout << "Introduce el primer lado:";
    cin >> a;
    cout << "Introdusce el segundo lado:";
    cin >> b;
    h = sqrt( a * a + b * b);
    cout << " lado 1 = " << a << endl;
    cout << " lado 2 = " << b << endl;
    cout << " hipotenusa = " << h << endl;

    return 0;
}
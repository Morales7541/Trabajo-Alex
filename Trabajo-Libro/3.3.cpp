#include <iostream>
using namespace std;
int main(){

    float a, b, c, d, e, f, denominador, x, y;
    cout << "Introduzca el valor de a:";
    cin >> a;
    cout << "Introdusca el valor de b:";
    cin >> b;
    cout << "Introdusca el valor de c:";
    cin >> c;
    cout << "Introduzca el valor de d:";
    cin >> d;
    cout << "Introdusca el valor de e:";
    cin >> e;
    cout << "Introdusca el valor de f:";
    cin >> f;
    denominador = a * e - b * d;
    if (denominador == 0)
    cout << " no solucion\n";
    else
    {
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;
        cout << " la solucion del sistema es\n";
        cout << " x = " << x << " y = " << y << endl;
    }

   return 0;
}
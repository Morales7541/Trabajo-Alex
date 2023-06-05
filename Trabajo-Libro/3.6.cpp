#include <iostream>
using namespace std;
int main(){
    float pies, pulgadas, yardas, metros, centimetros;
    cout << " Introduzca pies: ";
    cin >> pies;
    pulgadas = pies * 12;
    yardas = pies / 3;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;
    cout << " pies " << pies << endl;
    cout << " pulgadas " << pulgadas << endl;
    cout << " yardas " << yardas << endl;
    cout << " centimetros " << centimetros << endl;
    cout << " metros " << metros << endl;

return 0;
}
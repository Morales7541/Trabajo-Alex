#include <iostream>
using namespace std;
int main(){
    int hectometros, decametros, metros, decimetros;
    cout << " Introduzca hectometros: ";
    cin >> hectometros;
    cout <<"Introdusca decametros: ";
    cin >> decametros;
    cout <<"Itrodusca metros: ";
    cin >> metros;
    decimetros = ((hectometros * 10 + decametros) * 10 + metros) * 10;
    cout << " numero de decimetros es "<< decimetros << endl;

 return 0;
}
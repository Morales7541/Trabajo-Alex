#include <iostream>
using namespace std;
int main(){
    float m, energia;
    const float c = 2.997925e+10;
    cout << " introduzca masa: ";
    cin >> m;
    energia = c * m * m * m;
    cout << " energia en ergios : " << energia;

 return 0;
}
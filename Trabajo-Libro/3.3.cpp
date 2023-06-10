#include <iostream>

int main() {
    double a, b, c, d, e, f;

    // Leer los coeficientes
    std::cout << "Ingrese los coeficientes de las ecuaciones:\2";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "d: ";
    std::cin >> d;
    std::cout << "e: ";
    std::cin >> e;
    std::cout << "f: ";
    std::cin >> f;

    // Calcular la solución
    double determinante = a * d - b * c;
    double x, y;

    if (determinante != 0) {
        x = (e * d - b * f) / determinante;
        y = (a * f - e * c) / determinante;
        std::cout << "Solución:\n";
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    } else {
        if (e * c - a * f == 0 && b * f - e * d == 0) {
            std::cout << "El sistema tiene infinitas soluciones.\n";
        } else {
            std::cout << "El sistema no tiene solución.\n";
        }
    }

    return 0;
}


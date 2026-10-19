#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    // работа с float
    float a = 1000.f;
    float b = 0.0001f;
    float c, d, e, f, g, h, i, x;

    c = a - b;        // скобка (a - b)
    d = c * c;        // (a - b)^2
    e = a * a;        // a^2
    f = 2 * a * b;    // 2ab
    g = e - f;        // (a^2 - 2ab)
    h = d - g;        // числитель
    i = b * b;        // знаментаель
    x = h / i;        // итог

    // выводим с 1 знаком после запятой
    cout << fixed << setprecision(1) << x << endl;

    // работа с double
    double a2 = 1000.0;
    double b2 = 0.0001;
    double c2, d2, e2, f2, g2, h2, i2, x2;

    c2 = a2 - b2;
    d2 = c2 * c2;
    e2 = a2 * a2;
    f2 = 2 * a2 * b2;
    g2 = e2 - f2;
    h2 = d2 - g2;
    i2 = b2 * b2;
    x2 = h2 / i2;

    cout << fixed << setprecision(10) << x2 << endl;

    return 0;
}

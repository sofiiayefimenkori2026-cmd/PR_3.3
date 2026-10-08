// Lab_03_3.cpp
// Єфіменко Софії
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -8 - R)
        y = -R;
    else if (-8 - R < x && x <= -8 + R)
        y = -R - sqrt(R * R - (x + 8) * (x + 8));
    else if (-8 + R < x && x <= 2)
        y = -R + ((2.0 + R) / (10.0 - R)) * (x + 8 - R);
    else if (2 < x && x <= 6)
        y = 0;
    else
        y = pow(x - 6, 2);
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
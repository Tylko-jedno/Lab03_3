// Lab_03_3.cpp
// Головенко Костянтин
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, R; //вхідні дані
    double y;    //результат
    
    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;

    if (x <= -8)
        y = -R;
    else {
        if (x <= -R)
            y = (R * (R + x)) / (-R + 8);
        else {
            if (x <= R)
                y = -sqrt((R - x) * (R + x));
            else {
                if (x <= 5)
                    y = (2 * (x - R)) / (5 - R);
                else
                    y = 3;
            }
        }
    }
    
    cout << "y = " << y << endl;

}





#include <iostream>
#include <cmath>
/**
    @file Programa.cpp
    @brief Файл исходных кодов 
    @copyright ВоГУ
    @author Громов И.А.
    @date 30-06-2024
    @version 1.0.0
\pаr Использует файл:
    @ref Gromov_module.h
\par Содержит класс:
    @ref Gromov_module.h
*/
using namespace std;
double enterA(double a) {
    cout << "vvedite polojitelnoe chislo A\n";
    cin >> a;
    if (a <= 0) {
        cout << "error\n";
    }
    else {
        cout << "Vi vveli polojitelnoe chislo\n";
    }
    return 0;

}
double stre(double f) {
    double s = 0;
    cout << "vvedite storonu treug\n";
    cin >> f;
    if (f <= 0) {
        cout << "error\n";
    }
    else {
        s = f * f * ((sqrt(3)) / 4);
        cout << "ploshad treug = " << s << "\n";
    }
    return 0;
}

double pertre(double k) {
    double p = 0;
    cout << "vvedite storonu treug\n";
    cin >> k;
    if (k <= 0) {
        cout << "error\n";
    }
    else {
        p = k * 3;
        cout << "perimeter treug = " << p << "\n";
    }
    return 0;
    return 0;
}

int main()
{
    double polojch = 0;
    double storona = 0;
    double storonap = 0;
    int vibor = 0;
    cout << "1 - vvesti polojitelnoe chislo A\n" << "2 - ploshad ravnostoronnego treug\n" << "3 - perimeter ravnostoronnego treug\n";
    cout << "vvedite chislo ot 1 do 3\n";
    cin >> vibor;
    switch (vibor) {

    case 1: enterA(polojch);
        break;
    case 2: stre(storona);
        break;
    case 3: pertre(storonap);
        break;

    default: cout << "error\n";
    }
}

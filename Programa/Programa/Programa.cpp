

#include <iostream>
using namespace std;
double enterA() {

}
double stre() {

}

double pertre() {

}

int main()
{
    int a = 0;
    cout << "1 - ввести положительное число А\n" << "2 - вычислить площадь равностороннего треугольника S = а2\n" << "3 - вычислить периметр равностороннего треугольника Р = 3*a* Sqrt(3) / 4\n";
    cout << "Введите число от 1 до 3 включительно";
    cin >> a;
    switch (a) {

    case 1: enterA;
    case 2: stre;
    case 3: pertre;
     
    default: cout << "неправильный ввод";
    }


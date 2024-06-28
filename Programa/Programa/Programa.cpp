

#include <iostream>
#include <cmath>
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

double pertre() {
    return 0;
}

int main()
{
    double polojch = 0;
    double storona = 0;
    int vibor = 0;
    cout << "1 - vvesti polojitelnoe chislo A\n" << "2 - ploshad ravnostoronnego treug\n" << "3 - perimeter ravnostoronnego treug\n";
    cout << "vvedite chislo ot 1 do 3\n";
    cin >> vibor;
    switch (vibor) {

    case 1: enterA(polojch);
        break;
    case 2: stre(storona);
        break;
    case 3: pertre();
        break;

    default: cout << "error\n";
    }
}

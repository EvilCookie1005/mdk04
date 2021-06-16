#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, c, t;
    cout << "Введите a:\n";
    cin >> a;
    cout << "Введите b:\n";
    cin >> b;
    cout << "Введите c:\n";
    cin >> c;

    double* aPtr = &a;
    double* bPtr = &b;
    double* cPtr = &c;
    double* tPtr = &t;
    t = c * 3;
    a = c;
    cout << "c: " << t << endl;
    cout << "a: " << a << endl;

    return 0;
}

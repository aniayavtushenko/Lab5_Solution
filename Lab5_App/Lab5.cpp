#include <iostream>
#include <Windows.h>
#include "Rational.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "--- Перевірка роботи статичної бібліотеки ---" << endl << endl;

    Rational r1, r2;

    cout << "Перший дріб:" << endl;
    r1.Read();
    cout << "Перший дріб після скорочення: ";
    r1.Display();
    cout << endl;

    cout << "Другий дріб:" << endl;
    r2.Read();
    cout << "Другий дріб після скорочення: ";
    r2.Display();
    cout << endl;

    Rational sum = r1 + r2;
    cout << "Додавання: ";
    sum.Display();

    Rational v = r1 - r2;
    cout << "Віднімання: ";
    v.Display();

    Rational m = r1 * r2;
    cout << "Множення: ";
    m.Display();

    Rational d = r1 / r2;
    cout << "Ділення: ";
    d.Display();
    cout << endl;

    cout << "Порівняння:" << endl;

    if (r1 == r2) {
        cout << "Дріб 1 дорівнює дробу 2." << endl;
    }
    else {
        cout << "Дріб 1 не дорівнює дробу 2." << endl;
    }

    if (r1 > r2) {
        cout << "Дріб 1 більший за дріб 2." << endl;
    }
    else {
        cout << "Дріб 1 не більший за дріб 2." << endl;
    }

    if (r1 < r2) {
        cout << "Дріб 1 менший за дріб 2." << endl;
    }
    else {
        cout << "Дріб 1 не менший за дріб 2." << endl;
    }

    cout << endl;
    return 0;
}
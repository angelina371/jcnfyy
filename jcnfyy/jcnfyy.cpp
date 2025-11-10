#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
unsigned long long a0, a1, n, i;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть кількість елементів n = ";
    cin >> n;
    unsigned long long a0 = 1;
    unsigned long long a1 = 2;
    cout << a0 << endl;
    cout << a1 << endl;
    for (i = 2; i < n; i++)
    {
        unsigned long long a2 = pow((3 * a1 - 2), 2);
        cout << a2 << endl;
        a0 = a1;
        a1 = a2;
    }
    return 0;
}
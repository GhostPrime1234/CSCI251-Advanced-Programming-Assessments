// finMax.cpp
#include <iostream>
using namespace std;

template <typename T>
T findMax(T &a, T &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1 = 10, num2 = 20;
    cout << findMax(num1, num2) << endl;

    double d1 = 1.11, d2 = 2.22;
    cout << findMax(d1, d2) << endl;

    char c1 = 'a', c2 = 'b';
    cout << findMax(c1, c2) << endl;

    float f1 = 3.12f, f2 = 3.13f;
    cout << findMax(f1, f2) << endl;

    return 0;
}
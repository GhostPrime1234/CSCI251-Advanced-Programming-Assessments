// Filename: Symbolic.cpp

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printSymbol(T value, int n, char symbol)
{
    for (int i = 0; i < n; i++)
    {
        cout << symbol;
    }
    cout << " " << value << " ";

    for (int i = 0; i < n; i++)
    {
        cout << symbol;
    }
    cout << endl;
}

int main()
{
    printSymbol<int>(47, 3, '*');
    printSymbol<double>(39.25, 4, '-');
    printSymbol<char>('a', 5, '+');
    printSymbol<string>("Hello", 6, '#');
    return 0;
}
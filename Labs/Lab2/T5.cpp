#include <iostream>
#include <exception>

using namespace std;
class MyException : public exception
{
public:
    // This function will be called to output a string when an exception araises.
    const char *what() const throw()
    {
        return "Attempted to divide by zero!\n";
    }
};

int main()
{
    float x, y;
    cout << "Enter the numbers of x and y: ";
    cin >> x >> y;
    try
    {
        if (y == 0)
        {
            throw MyException();
        }
        cout << "x/y = " << x / y << endl;
    }
    catch (MyException &e)
    {
        cerr << e.what();
    }
}
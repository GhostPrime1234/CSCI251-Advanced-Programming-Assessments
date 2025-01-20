#include <iostream>

using std::cout, std::endl;

class B
{
public:
    virtual void X() = 0;
};

class D : public B
{
public:
    virtual void X() { cout << "D object" << endl; }
};

int main()
{
    B obj;
}
// File: Cat.cpp
#include <iostream>
#include <string>

using namespace std;

struct Cat
{
private:
    string name;
    int age;
    string breed;

public:
    const static float insurance;

    void setCat(string n, string b, int a)
    {
        name = n;
        breed = b;
        age = a;
    }

    void showCat()
    {
        cout << "Cat: " << name << " is a " << breed << endl;
        cout << "Its age is " << age << " years" << endl;
        cout << "The insurance cost is " << insurance << endl;
        float owningCost = calculatePrice();
        cout << "The owning cost is: $" << owningCost << endl;
    }

    float calculatePrice()
    {
        return age * 1.5 + insurance;
    }
};

const float Cat::insurance = 99.9;

int main()
{
    Cat myCat;
    myCat.setCat("Tiger", "British Shorthair", 3);
    myCat.calculatePrice();
    myCat.showCat();
}
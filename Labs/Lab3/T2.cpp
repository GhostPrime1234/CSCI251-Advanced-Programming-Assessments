// Cat.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
    string name;
    string breed;
    int age;
    static constexpr double licenseFee = 10;

public:
    // Parameterized constructor
    Cat(string _name, string _breed, int _age) : name(_name), breed(_breed), age(_age) {}

    // Default constructor
    Cat();

    // Copy  constructor
    Cat(const Cat &cat);
    ~Cat();
    void setCatData(string, string, int);
    void showCat();
    void showAddresses();
};
// const double Cat::licenseFee = 10;

// Default constructor
Cat::Cat() : name("Unknown"), breed("Unknown"), age(0) {}

// Destructor
Cat::~Cat()
{
    cout << "Cat object destroyed" << endl;
}

// Copy constructor
Cat::Cat(const Cat &cat) : name(cat.name), breed(cat.breed), age(cat.age) {}

void Cat::setCatData(string catName, string catBreed, int catAge)
{
    name = catName;
    breed = catBreed;
    age = catAge;
}

void Cat::showAddresses()
{
    cout << "Name: " << &name << endl;
    cout << "Breed: " << &breed << endl;
    cout << "Age: " << &age << endl;
    cout << "License fee: " << &licenseFee << endl;
}
void Cat::showCat()
{
    cout << "Cat: " << name << " is a " << breed << endl;
    cout << "The cat's age is " << age << endl;
    cout << "License fee: $" << licenseFee << endl;
}

int main()
{
    Cat cat1("Whiskers", "Siamese", 5);
    Cat cat2;

    cat2.setCatData("Tigger", "Fluffy unit", 3);

    cout << "Cat 1 details:" << endl;
    cat1.showCat();
    cat1.showAddresses();

    cout << "\nCat 2 details:" << endl;
    cat2.showCat();
    cat2.showAddresses();

    // Demonstrate copy constructor
    Cat cat3 = cat1;
    cout << "\nCat 3 details:" << endl;
    cat3.showCat();
    cat3.showAddresses();

    return 0;
}

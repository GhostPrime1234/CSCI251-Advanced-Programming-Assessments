// Filename: doubledClass.cpp
#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

template <class T>
class hold
{
private:
    T value;

public:
    hold(T _value) : value(_value) {}

    T doubled();
};

template <typename T>
T hold<T>::doubled()
{
    return {value + value};
}

// Overload for char to return a string
template <>
class hold<char>
{
private:
    char value;

public:
    hold(char _value) : value(_value) {}

    string doubled()
    {
        return {value, value};
    }
};

int main()
{
    hold<int> int_doubled(5);
    cout << int_doubled.doubled() << endl; // 10

    hold<float> float_doubled(10.56f);
    cout << float_doubled.doubled() << endl; // 21.12

    hold<char> char_doubled('a');
    cout << char_doubled.doubled() << endl; // "aa"

    hold<string> string_doubled(string("Hello"));
    cout << string_doubled.doubled() << endl; // "HelloHello"

    return 0;
}
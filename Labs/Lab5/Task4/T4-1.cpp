#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

template <typename T>
T doubled(T value)
{
    return {value + value};
}

// Specialization for char
string doubled(char value)
{
    return {value, value}; // Creates a string with two copies of `value`
}

int main()
{
    int int_doubled = doubled(5);
    cout << int_doubled << endl; // 10

    float float_doubled = doubled(10.56f);
    cout << float_doubled << endl; // 21.12

    string char_doubled = doubled('a');
    cout << char_doubled << endl; // "aa"

    string string_doubled = doubled(string("Hello"));
    cout << string_doubled << endl; // "HelloHello"

    return 0;
}

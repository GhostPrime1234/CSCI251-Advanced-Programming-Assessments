// File: Library.h

#ifndef LIBRARY_H
#define LIBRARY_H

using namespace std;

#include <string>

class City;
class Money
{
private:
    string country;
    float dollarUnits;
    float exchangeRate;

public:
    Money(string, float, float);
    friend bool areInSameCountry(const City &, const Money &);

    void display() const; // Display function for Money
};

class City
{
private:
    string name;
    string country;
    float latitude;
    float longitude;
    Money money_object;

public:
    City(string, string, float, float, Money &);

    void display() const; // Display function for City

    // Friend function declaration
    friend bool areInSameCountry(const City &, const Money &);
};
#endif
// File: Library.cpp

#include <iostream>
#include <string>
#include "T5-2.h"

using namespace std;

// Money Constructor
Money::Money(string _country, float _dollarUnits, float _exchangeRate) : country(_country), dollarUnits(_dollarUnits), exchangeRate(_exchangeRate) {}

// City Constructor
City::City(string _name, string _country, float _latitude, float _longitude, Money &_money_object) : name(_name), country(_country), latitude(_latitude), longitude(_longitude), money_object(_money_object) {}

// Display function for Money
void Money::display() const
{
    cout << "Country: " << country << endl;
    cout << "Dollar Units: " << dollarUnits << endl;
    cout << "Exchange Rate: " << exchangeRate << endl;
}

// Display function for City
void City::display() const
{
    cout << "City: " << name << endl;
    cout << "Country: " << country << endl;
    cout << "Latitude: " << latitude << endl;
    cout << "Longitude: " << longitude << endl;
    money_object.display();
}

// Friend function definition to check if a City and Money are in the same country
bool areInSameCountry(const City &city, const Money &money)
{
    return city.country == money.country;
}

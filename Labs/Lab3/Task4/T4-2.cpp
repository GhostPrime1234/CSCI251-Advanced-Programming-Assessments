// File: Library.cpp

#include <iostream>
#include <string>
#include "T4-2.h"

using namespace std;

// City Constructor
City::City(string _name, string _country, float _latitude, float _longitude) : name(_name), country(_country), latitude(_latitude), longitude(_longitude) {}

Money::Money(string _country, float _dollarUnits, float _exchangeRate) : country(_country), dollarUnits(_dollarUnits), exchangeRate(_exchangeRate) {}

// Friend function definition to check if a City and Money are in the same country
bool areInSameCountry(const City &city, const Money &money)
{
    return city.country == money.country;
}
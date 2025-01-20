#include <iostream>
#include <string>

#include "T4-2.h"

using namespace std;

int main()
{
    // Create Money and City objects
    Money usd("United States", 1.0, 100);
    City newYork("New York", "United States", 40.7128, -74.0060);

    Money aud("Australia", 1.0, 100);
    City sydney("Sydney", "Australia", -33.8688, 151.2093);

    // Test if the City and Money are in the same country
    cout << "Are New York and USD in the same country? "
         << (areInSameCountry(newYork, usd) ? "Yes" : "No") << endl;

    cout << "Are Sydney and AUD in the same country? "
         << (areInSameCountry(sydney, aud) ? "Yes" : "No") << endl;

    cout << "Are Sydney and USD in the same country? "
         << (areInSameCountry(sydney, usd) ? "Yes" : "No") << endl;

    cout << "Are New York and AUD in the same country? "
         << (areInSameCountry(newYork, aud) ? "Yes" : "No") << endl;

    return 0;
}
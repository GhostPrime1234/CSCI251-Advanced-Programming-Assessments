#include <iostream>
#include "mylibrary.h"

using std::cout, std::cin;

void functionOne(int &one, int &two, int &three)
{
	cout << "Enter the first integer : ";
	cin >> one;

	cout << "Enter the third integer : ";
	cin >> two;

	cout << "Enter the second integer : ";
	cin >> three;
}

int functionTwo(int &one, int &two, int &three)
{
	return one + two + three;
}

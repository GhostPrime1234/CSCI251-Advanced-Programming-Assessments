#include <iostream>
#include <cmath>

using namespace std;

#define mn(a, b) ((a) > (b) ? a : b)
#define e 2.718282

int main(int argle, char *argv[])
{
	if (argle != 3)
	{
		cerr << "Enter two integers after the program name please!" << endl;
		return 1;
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	// c is the Lower input of (a, b)
	int c = min(a, b);

	cout << "log10(10) should be 1 : " << log10(10) << endl;
	cout << "log(e) should be 1    : " << log(e) << endl;
	cout << "log of lower input is : " << log(c) << endl;

	return 0;
}

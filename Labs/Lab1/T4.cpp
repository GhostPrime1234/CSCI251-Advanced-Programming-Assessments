#include <iostream>
#include <cmath>

using std::cout, std::cin, std::cerr, std::endl;

int main()
{
    // Mising Part 1:
    float r;

    cout << "Input the radius:" << endl;
    cin >> r;

    // Mising Part 2:
    double PI = 2 * acos(0.0);
    double s = PI * r * r; // Area
    double v = 2 * PI * r; // Circumference

    cout << "The area of the circle is: " << endl;
    cout << s << endl;

    cout << "The circumference of the circle is: " << endl;
    cout << v << endl;
    return 0;
}
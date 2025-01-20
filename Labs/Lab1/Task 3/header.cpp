#include <iostream>

using std::cout, std::cin, std::cerr, std::endl;

bool verifyMaterial(char &material)
{
    return material == 'w' || material == 'c' || material == 'b' || material == 'b';
}

void getDimensions(int &width, int &height, int &depth)
{
    cout << "Please enter the width of the wall: ";
    cin >> width;

    cout << "Please enter the height of the wall: ";
    cin >> height;

    cout << "Please enter the depth of the wall: ";
    cin >> depth;
}

int calculatePrice(int width, int height, int depth, char material)
{
    int m;
    if (material == 'w')
        m = 75;
    else if (material == 'c')
        m = 150;
    else if (material == 'b')
        m = 175;
    else
        m = 0;

    return m * (width * depth * height) + 200;
}

void displayCost(int cost)
{
    cout << "Cost of the retaining wall is: $" << cost << "." << endl;
}
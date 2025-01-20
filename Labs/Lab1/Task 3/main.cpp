#include <iostream>
#include "header.h"

using std::cout, std::endl, std::cin, std::cerr;

int main()
{
    char material;
    int width, height, depth;
    cout << "Please enter the material to be used for building the wall: ";
    cin >> material;

    // Function to accept the type of material (w, c or b). Any other entry will be rejected.
    if (!verifyMaterial(material))
        cerr << "Please enter a valid material (w)ood, (c)oncrete or (b)rick. " << endl;

    // Function to accept the width, height and depth of the wall.
    getDimensions(width, height, depth);

    // Calculate the price by taking the wall width, height, depth and materials.
    int cost = calculatePrice(width, height, depth, material);

    // Display the final cost of the retaining wall
    displayCost(cost);
}
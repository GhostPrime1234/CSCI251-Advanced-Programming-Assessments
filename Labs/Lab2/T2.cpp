// File: Read-words.cpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream inFile;
    inFile.open("Words");

    if (inFile.bad())
    {
        cout << "File could not be opened" << endl;
        return 1;
    }
    string line;

    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();
}
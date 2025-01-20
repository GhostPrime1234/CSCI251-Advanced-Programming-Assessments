// File: Box.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Box
{
private:
    string name;
    vector<Box *> boxes;
    int capacity;

public:
    Box(string _name, int _capacity) : name(_name), capacity(_capacity) {}
    ~Box()
    {
        for (Box *box : boxes)
            delete box;
    }

    bool addBox(Box *box)
    {
        if (this == box)
        {
            cerr << "Cannot add the box to itself" << endl;
            return false;
        }

        if (boxes.size() >= capacity)
        {
            cout << "Cannot add more Boxes. Capacity reached!";
            return false;
        }
        boxes.push_back((box));
        return true;
    }

    void display(int level = 0) const
    {
        for (int i = 0; i < level; i++)
            cout << "  ";

        cout << name << endl;
        for (const Box *box : boxes)
            box->display(level + 1);
    }
};

int main()
{
    Box mainBox("MainBox", 3);
    Box subBox1("SubBox1", 2);
    Box subBox2("SubBox2", 2);
    Box subBox3("SubBox3", 2);

    mainBox.addBox(&subBox1);
    mainBox.addBox(&subBox2);
    mainBox.addBox(&subBox3);

    Box subSubBox1("Sub Sub Box1", 1);
    subBox1.addBox(&subSubBox1);

    // Testing box cannot be added to itself
    subBox2.addBox(&subBox2);

    mainBox.display();

    return 0;
}
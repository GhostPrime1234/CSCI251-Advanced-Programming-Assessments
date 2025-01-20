#include <iostream>
#include <string>
using namespace std;
class Painting
{
protected:
   string title;
   string artist;
   int value;

public:
   Painting();
   Painting(string, string = " ");
   void showPainting();
   void setData();
   string getArtist();
   string getTitle();
};

// Default Constructor for Painting
Painting::Painting()
{
   title = " ";
   artist = " ";
   value = 0;
}

// Parameterized Constructor for Painting
Painting::Painting(string name, string painter)
{
   title = name;
   artist = painter;
   value = 400;
}

void Painting::setData()
{
   cout << "Enter painting's title ";
   cin >> title;
   cout << "Enter artist ";
   cin >> artist;
   value = 400;
}
void Painting::showPainting()
{
   cout << title << " by " << artist << " value $" << value << endl;
}
string Painting::getArtist()
{
   return artist;
}
string Painting::getTitle()
{
   return title;
}

class FamousPainting : public Painting
{
public:
   FamousPainting(string, string);
};

FamousPainting::FamousPainting(string name, string painter) : Painting(name, painter)
{
   value = 25000;
}

bool isPaintingFamous(Painting &p)
{
   bool isFamous = true;
   const int NUM = 4;
   string artists[NUM] = {"Degas", "Monet", "Picasso", "Rembrandt"};
   for (int i = 0; i < NUM; ++i)
      if (p.getArtist() == artists[i])
         isFamous = false;
   return isFamous;
}

int main()
{
   const int NUM = 6;
   Painting pictures[NUM];

   for (int i = 0; i < NUM; ++i)
   {
      Painting temp;
      temp.setData();
      if (isPaintingFamous(temp))
      {
         FamousPainting tempF(temp.getTitle(), temp.getArtist());
         pictures[i] = tempF;
      }
      else
         pictures[i] = temp;
   }
   for (int i = 0; i < NUM; ++i)
      pictures[i].showPainting();

   return 0;
}

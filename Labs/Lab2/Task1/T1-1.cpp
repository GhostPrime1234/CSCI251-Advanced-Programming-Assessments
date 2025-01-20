#include <iostream>
using namespace std;

void countDown(int highest, int lowest);

// Prints integers from highest to lowest, inclusive.

int main()
{
   int high, low, temp;

   cout << "Enter an integer ";
   cin >> low;

   cout << "Enter another integer ";
   cin >> high;

   if (high < low)
   {
      temp = low;
      high = low;
      low = temp;
   }

   countDown(low, high);
   return 0;
}

void countDown(int highest, int lowest)
{
   for (int x = highest; x <= lowest; x++)
      cout << x << " " << endl;
}

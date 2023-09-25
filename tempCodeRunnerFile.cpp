#include <iostream>
using namespace std;
int main()
{
     int count = 1;
     int number, square, cube;
     while (count < = 10)
     {
          square = count * count;
          cube = count * count * count;
          cout << count << "\t" << square << "\t" << cube << endl;
          count++;
     }

     return 0;
}
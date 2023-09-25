#include <iostream>
using namespace std;
int main()
{
     int n = 1;
     int square, cube;
     while (n <= 10)
     {
          square = n * n;
          cube = n * n * n;
          cout << n << "\t" << square << "\t" << cube << endl;
          n++;
     }

     return 0;
}
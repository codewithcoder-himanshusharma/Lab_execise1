#include <iostream>
using namespace std;

int main()
{
     int n = 1;   
     int sum = 0;

     cout << "Term\tCube\tSum" << std::endl;

     while (n <= 10)
     { 
          int cube = n * n * n;
          sum += cube; 

          cout << n << "\t" << cube << "\t" << sum << std::endl;

          n++; // Increment n to move to the next natural number
     }

     cout << "Sum of the first 10 terms: " << sum << std::endl;

     return 0;
}

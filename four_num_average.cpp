#include <iostream>
using namespace std;
int main()
{
     float sum = 0.0;
     int count = 0;
     float number;
     while (count < 4)
     {
          cout << "enter the a number:";
          cin >> number;
          sum += number;
          count++;
     }
     if (count > 0)
     {
          float avarage = sum / count;
          cout << "avarage numbers: " << avarage << endl;
     }
     else
     {
          cout << "No numbers avarage " << endl;
     }
     return 0;
}
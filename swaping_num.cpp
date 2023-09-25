#include <iostream>
using namespace std;
int main()
{
     int a, b, swap;
     cout << "enter the a number:";
     cin >> a;
     cout << "enter the b number:";
     cin >> b;
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     cout << "swapping a:" << a << endl;
     cout << "swapping b:" << b << endl;

     return 0;
}
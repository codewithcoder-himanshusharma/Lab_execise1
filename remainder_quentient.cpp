#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    
    // Input the dividend and divisor
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    
    // Calculate quotient and remainder
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    // Output the results
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}

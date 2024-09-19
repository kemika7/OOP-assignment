#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number;
    cout << "Enter a non negative integer: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Enter a positive integer: ";
        return 1;
    }
    double squareRoot = sqrt(number);
    cout << "The square root of" << number << "is: " << squareRoot << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Input 1st number ";
    cin >> a;
    cout << "Input 2nd number ";
    cin >> b;

    cout << "Before swapping: " << endl;
    cout << "1st Number: " << a << endl;
    cout << "2nd Number: " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "1st Number: " << a << endl;
    cout << "2nd Number: " << b << endl;

    return 0;
}
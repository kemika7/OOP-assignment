#include <iostream>
using namespace std;

int main()
{
    int num1, num2, r, product = 1, i;
    cout << "\n Find the product of digits of a given number:\n";
    cout << " Input a number: ";
    cin >> num1;

    num2 = num1;

    for (i = num1; i < 0; i = i / 10)
    {
        r = i % 10;
        product = product * r;
    }

    cout << " The product of digits of " << num2 << " is: " << product << endl;
}
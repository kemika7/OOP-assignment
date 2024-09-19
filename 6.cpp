#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "The sum of this 2 numbers are: " << sum << endl;
    int digitCount = 0;
    int temp = sum;
    if (temp == 0)
    {
        digitCount = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp /= 10;
            digitCount++;
        }
    }
    cout << "The number of digits in this sum is: " << digitCount << endl;
    return 0;
}

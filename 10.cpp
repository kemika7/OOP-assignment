#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter positive numbers: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Enter positive number: " << endl;
        return 1;
    }
    while (number >= 10)
    {
        int sum = 0;
        while (number > 0)
        {
            sum += number % 10;
            number /= 10;
        }
        number = sum;
    }
    cout << "The single digit is: " << number << endl;
    return 0;
}

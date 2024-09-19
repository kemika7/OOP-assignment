#include <iostream>
using namespace std;
int main()
{
    int month, year, days;
    cout << "Input your required year: ";
    cin >> year;
    cout << "Enter your month (1-12): ";
    cin >> month;
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }
    cout << "Numeber of days in year is " << year << "and month" << month << "is: " << days << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    cout << "Enter your first date(YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;
    cout << "Enter your second date(YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;
    int totalday1 = (year1 * 365) + (month1 * 30) + day1;
    int totalday2 = (year2 * 365) + (month2 * 30) + day2;
    int difference = abs(totalday1 - totalday2);
    cout << "Days between these two dates are: " << year1 << month1 << day1 << " and " << year2 << month2 << day2 << " = " << difference << " days " << endl;
    return 0;
}

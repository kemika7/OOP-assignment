#include <iostream>
using namespace std;

int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumAllDigitsInRange(int start, int end)
{
    int totalSum = 0;
    for (int i = start; i <= end; i++)
    {
        totalSum += sumDigits(i);
    }
    return totalSum;
}

int main()
{
    int start, end;

    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    std::cout << "The sum of all digits between " << start << " and " << end << " is: "
              << sumAllDigitsInRange(start, end) << std::endl;

    return 0;
}
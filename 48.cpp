#include <iostream>
#include <string>
using namespace std;

string oneDigitToWords(int num)
{
    switch (num)
    {
    case 1:
        return "One";
    case 2:
        return "Two";
    case 3:
        return "Three";
    case 4:
        return "Four";
    case 5:
        return "Five";
    case 6:
        return "Six";
    case 7:
        return "Seven";
    case 8:
        return "Eight";
    case 9:
        return "Nine";
    default:
        return "";
    }
}

string teenToWords(int num)
{
    switch (num)
    {
    case 10:
        return "Ten";
    case 11:
        return "Eleven";
    case 12:
        return "Twelve";
    case 13:
        return "Thirteen";
    case 14:
        return "Fourteen";
    case 15:
        return "Fifteen";
    case 16:
        return "Sixteen";
    case 17:
        return "Seventeen";
    case 18:
        return "Eighteen";
    case 19:
        return "Nineteen";
    default:
        return "";
    }
}

string tensToWords(int num)
{
    switch (num)
    {
    case 2:
        return "Twenty";
    case 3:
        return "Thirty";
    case 4:
        return "Forty";
    case 5:
        return "Fifty";
    case 6:
        return "Sixty";
    case 7:
        return "Seventy";
    case 8:
        return "Eighty";
    case 9:
        return "Ninety";
    default:
        return "";
    }
}

string numberToWords(int num)
{
    if (num == 0)
        return "Zero";
    else if (num < 10)
        return oneDigitToWords(num);
    else if (num < 20)
        return teenToWords(num);
    else
    {
        int tens = num / 10;
        int ones = num % 10;
        if (ones == 0)
            return tensToWords(tens);
        else
            return tensToWords(tens) + " " + oneDigitToWords(ones);
    }
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0 || number > 99)
    {
        cout << "The program currently supports numbers between 0 and 99." << endl;
    }
    else
    {
        cout << numberToWords(number) << endl;
    }

    return 0;
}

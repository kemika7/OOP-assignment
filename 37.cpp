#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int binomialCoefficient(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void printPascalsTriangle(int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int numRows;
    cout << "Input number of rows: ";
    cin >> numRows;

    if (numRows <= 0)
    {
        cout << "Number of rows must be positive." << endl;
        return 1;
    }

    printPascalsTriangle(numRows);
    return 0;
}

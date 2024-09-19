#include <iostream>
using namespace std;
int main()
{
    int n, factorial = 1;
    cout << "Enter your positive integer: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        factorial *= i;
        cout << "The facotrial of" << n << "is: " << factorial << endl;
    }
    return 0;
}

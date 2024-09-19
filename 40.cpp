#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;

    if (n <= 0 || n >= 26)
    {
        cout << "Number must be between 1 and 25." << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; ++j)
        {
            cout << char('A' + j - 1) << " ";
        }

        for (int j = i - 1; j >= 1; --j)
        {
            cout << char('A' + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int numRows;

    cout << "Input number of rows: ";
    cin >> numRows;

    if (numRows <= 0)
    {
        cout << "Number of rows must be a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= numRows; ++i)
    {
        cout << setw(numRows - i + 1);

        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}

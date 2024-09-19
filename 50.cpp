#include <iostream>
using namespace std;

int main()
{
    int n, largest;
    int num[50];

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array must have at least 1 element!" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << ": ";
        cin >> num[i];
    }
    largest = num[0];

    for (int i = 1; i < n; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "Largest element in the array is: " << largest << endl;

    return 0;
}

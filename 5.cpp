#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int numbers[] = {10, 20, 40, 80, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + size, greater<int>());
    cout << "The highest 3 numbers in this series are:";
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i] << "";
    }
    return 0;
}

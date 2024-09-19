#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "The number must be greater than 1." << endl;
        return 1;
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    cout << "The prime number less than " << n << " is " << count << endl;
    return 0;
}
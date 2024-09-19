#include <iostream>
using namespace std;
int main()
{

    int prv = 0, pre = 1, nxt, i, n;

    cout << "\n\n Display the first n terms of Fibonacci series:\n"; 
    cout << " Input number of terms to display: "; 
    cin >> n;                                      

    cout << " Here is the Fibonacci series up to " << n << " terms: " << endl; 
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++)
    {
        nxt = prv + pre;
        cout << " " << nxt;
        prv = pre;
        pre = nxt;
    }
    cout << endl;
}
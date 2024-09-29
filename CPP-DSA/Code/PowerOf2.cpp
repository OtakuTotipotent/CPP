#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int p = 2;
    while (p < n)
    {
        p *= 2;
    }

    if (p == n)
        cout << n << " is the power of 2";
    else
        cout << n << " is NOT the power of 2";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int reverseMyNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev *= 10 + (n % 10);
        n /= 10;
    }
    return rev;
}
int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    n = reverseMyNumber(n);

    cout << n;

    return 0;
}
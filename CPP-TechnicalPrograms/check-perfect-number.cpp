#include <iostream>
using namespace std;
int main()
{
    int n, d, s = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (d = 1; d <= n / 2; d++)
    {
        if (n % d == 0)
            s = s + d;
    }
    if (s == n)
        cout << n << " is a Perfect Number.!\n";
    else
        cout << n << " is Not a Perfect Number.!\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bin;
    cout << "Enter a binary number : ";
    cin >> bin;

    int ans = 0, p = 1; // p : 2^0 & so on . . .

    while (bin > 0)
    {
        int rem = bin % 10;
        ans += rem * p;
        bin /= 10;
        p *= 2;
    }

    cout << "Decimal Number : " << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deci;
    cout << "Enter Decimal Number : ";
    cin >> deci;

    int ans = 0, power = 1; // power = 10^0, 10^1, 10^2, . . .

    while (deci > 0)
    {
        int rem = deci % 2;
        deci = deci / 2;
        ans += power * rem;
        power *= 10;
    }

    cout << "Binary = " << ans;

    return 0;
}
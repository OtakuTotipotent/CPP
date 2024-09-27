#include <bits/stdc++.h>
using namespace std;
int main()
{
    int deci;
    cout << "Enter decimal number : ";
    cin >> deci;

    int ans = 0, p = 1; // p : 10^0, 10^1, 10^2, . . .

    while (deci > 0)
    {
        int rem = deci % 8;
        deci /= 8;
        ans += p * rem;
        p *= 10;
    }

    cout << "Octal : " << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int toOctal(int deci)
{
    int ans = 0, power = 1;
    while (deci > 0)
    {
        int rem = deci % 8;
        deci /= 8;
        ans += power * rem;
        power *= 10;
    }
    return ans;
}

int main()
{
    for (int i = 1; i < 11; i++)
        cout << setw(3) << left << i << " =  " << toOctal(i) << endl;

    return 0;
}
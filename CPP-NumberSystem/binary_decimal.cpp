#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, p, s = 0;
    cout << "Enter a Binary number : ";
    cin >> n;
    p = 1;
    while (n > 0)
    {
        s += ((n % 10) * p);
        p *= 2;
        n /= 10;
    }
    cout << "Decimal Number : " << s << endl;
    return 0;
}
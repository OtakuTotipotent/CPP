// Numbers having only two divisors i.e 1 & itself are called PRIME
#include <iostream>
using namespace std;
int main()
{
    int r, n, s, d;
    bool p;
    cout << "Enter range : ";
    cin >> r;
    for (n = 2; n < r + 1; n++)
    {
        p = 1;
        for (d = 2; d <= n / 2; d++)
        {
            if (n % d == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
            cout << n << "  ";
    }
    return 0;
}
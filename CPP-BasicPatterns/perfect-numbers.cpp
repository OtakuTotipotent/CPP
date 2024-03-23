// if the sum of all possible factors (whole divisors) of a number equal to that number, that number is called PERFECT
#include <iostream>
using namespace std;
int main()
{
    int r, n, d, s;
    cout << "Enter range : ";
    cin >> r;
    for (n = 1; n < r + 1; n++)
    {
        s = 0;
        for (d = 1; d <= n / 2; d++)
        {
            if (n % d == 0)
                s = s + d;
        }
        if (s == n)
            cout << n << "\t";
    }
    return 0;
}
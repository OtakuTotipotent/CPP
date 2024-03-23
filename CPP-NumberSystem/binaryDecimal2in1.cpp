#include <iostream>
using namespace std;
int b_d(int b)
{
    int x = 0, p = 1;
    while (b > 0)
    {
        x += (b % 10) * p;
        p *= 2;
        b /= 10;
    }
    return x;
}
int d_b(int d)
{
    int b = 0, x = 1, y;
    while (x <= d)
        x *= 2;
    x /= 2;
    while (x > 0)
    {
        y = d / x;
        b = b * 10 + y;
        d = d - x * y;
        x /= 2;
    }
    return b;
}
int main()
{
    unsigned int n;
    while (1)
    {
        cout << "\nEnter binary number : ";
        cin >> n;
        cout << "Ans. Decimal Number : : " << b_d(n);
        cout << "\nEnter decimal number : ";
        cin >> n;
        cout << "Ans. Binary Number : : " << d_b(n);
    }
    return 0;
}

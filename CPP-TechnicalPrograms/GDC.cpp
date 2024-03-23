// greatest common drivisor
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, d, g;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    d = (n1 <= n2) ? n1 : n2;
    for (; d > 0; d--)
    {
        if (n1 % d == 0 && n2 % d == 0)
        {
            cout << "Geatest Common Divisor : " << d << endl;
            break;
        }
    }
    return 0;
}
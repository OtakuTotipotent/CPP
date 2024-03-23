#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long n, m, x, y;
    string s = "";
    char ch;
    cout << "\n\tEnter a decimal number : ";
    cin >> n;
    x = 1;
    m = n;
    while (x <= n)
        x *= 16;
    x /= 16;
    while (x > 0)
    {
        y = n / x;
        n -= x * y;
        x /= 16;
        if (y <= 9)
            s = s + to_string(y);
        else
        {
            ch = y - 10 + 'A';
            s.push_back(ch);
        }
    }
    cout << "\n\tHexadecimal of number " << m << " is : " << s << endl
         << endl;
    return 0;
}
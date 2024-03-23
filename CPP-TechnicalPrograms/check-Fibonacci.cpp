#include <iostream>
using namespace std;
int main()
{
    int f, m, n, s;
    bool fibo = 0;
    cout << "Enter a number : ";
    cin >> f;
    if (f == 0 || f == 1)
        cout << "Fibonacci number!\n";
    else
    {
        m = 0;
        n = 1;
        s = 0;
        while (s <= f)
        {
            s = m + n;
            if (f == s)
            {
                fibo = 1;
                cout << "Fibonacci number!\n";
                exit(0);
            }
            m = n;
            n = s;
        }
    }
    if (!fibo)
        cout << n << " is not a Fibonacci number!\n";
    return 0;
}
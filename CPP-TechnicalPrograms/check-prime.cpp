#include <iostream>
using namespace std;
int main()
{
    long n;
    bool p = 1;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            p = 0;
            break;
        }
    }
    if (p)
        cout << n << " is a Prime Number!\n";
    else
        cout << n << " is Not a Prime Number!\n";
    return 0;
}
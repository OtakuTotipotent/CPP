#include <iostream>
using namespace std;
int main()
{
    int f = 0, l = 1, s, e, sum; // first, last, start, end
    cout << "Enter start point : ";
    cin >> s;
    cout << "Enter end point : ";
    cin >> e;
    cout << "\nFibonacci Series :: ";
    if (s == 0)
    {
        cout << 0 << "  " << 1 << "  ";
    }
    while (l < e + 1) // l<= e
    {
        sum = f + l;
        if (sum >= s && sum < e + 1)
            cout << sum << "  ";
        f = l;
        l = sum;
    }
    return 0;
}
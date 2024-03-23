// printing the product components of a number
#include <iostream>
using namespace std;
int main()
{
    int n, d1, d2, p = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (d1 = n; d1 >= p; d1--)
    {
        for (d2 = 1; d2 <= n; d2++)
        {
            if (d2 * d1 == n)
            {
                cout << d1 << " X " << d2 << endl;
                p = d2 + 1;
            }
        }
    }
    return 0;
}
/*

while (d1 >= d2)
    {
        if (d2 * d1 == n)
            cout << d2 << " X " << d1 << endl;

        d2++;
        d1--;
    }

*/
// majority element = frequency > n/2
//* This method is only for Sorted arrays
#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 0, 1, 1, 2, 2, 2, 2, 2};
    int n = 9, f = 1, ans = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == ans)
            f++;
        else
        {
            f = 1;
            ans = a[i];
        }

        if (f > n / 2)
            break;
    }

    cout << "\nMajority Element is " << ans << " having frequency : " << f << endl
         << endl;
    return 0;
}
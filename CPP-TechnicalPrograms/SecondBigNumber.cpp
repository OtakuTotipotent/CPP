#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 99, 3, 4, 6, 5, 8};
    int x1 = 0, x2 = 0;
    for (int i = 0; i < 2; i++)
    {
        int m = 0;
        for (int j = 0; j < 7; j++)
        {
            if (j == x1)
                continue;
            if (a[j] > a[m])
                m = j;
        }
        if (i == 0)
            x1 = m;
        else
            x2 = m;
    }

    cout << "The 1st Biggest number is : " << a[x1];
    cout << "\nThe 2nd Biggest number is : " << a[x2];

    return 0;
}
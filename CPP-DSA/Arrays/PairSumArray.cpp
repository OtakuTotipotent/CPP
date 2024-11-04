#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 7, 11, 15};
    int target = 22;
    int i = 0, j = 3; // j = size -1

    while (i < j)
    {
        if (a[i] + a[j] > target)
            j--;
        else if (a[i] + a[j] < target)
            i++;
        else
        {
            cout << "Pairs are : " << a[i] << " & " << a[j];
            break;
        }
    }

    return 0;
}
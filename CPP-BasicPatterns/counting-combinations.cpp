// printing all possible combinations of the numbers given
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    int i, j, k;
    int max, min;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    cout << "Enter 3rd number : ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
            max = a;
        else
            max = c;
        if (b < c)
            min = b;
        else
            min = c;
    }
    else
    {
        if (b > c)
            max = b;
        else
            max = c;
        if (a < c)
            min = a;
        else
            min = c;
    }
    for (i = min; i <= max; i++)
    {
        if (i == a || i == b || i == c)
        {
            for (j = min; j <= max; j++)
            {
                if (j == a || j == b || j == c)
                {
                    for (k = min; k <= max; k++)
                    {
                        if (k == a || k == b || k == c)
                        {
                            cout << setw(4) << left << i << setw(4) << left << j << setw(4) << left << k << endl;
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
}

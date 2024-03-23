#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    if (n % 2 == 0)
        n -= 1;
    for (int o = 0; o < n; o++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == (n / 2) || o == (n / 2))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
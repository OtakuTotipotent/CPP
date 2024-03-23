#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value : ";
    cin >> n;
    for (int o = 0; o < n; o++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1 || o == 0 || o == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
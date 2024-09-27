#include <bits/stdc++.h>
using namespace std;
int main()
{
    int height;
    cout << "Enter height of Diamond shape : ";
    cin >> height;
    //* Top of Hollow Diamond
    for (int t = 0; t < height; t++)
    {
        for (int s = 0; s < height - t - 1; s++) // outer spaces
            cout << ' ';
        cout << '*';
        if (t != 0) // for 1st term
        {
            for (int s = 0; s < 2 * t - 1; s++) // inner spaces
                cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
    //* Bottom of Hollow Diamond
    for (int b = height - 1; b > 0; b--)
    {
        for (int s = b; s < height; s++)
            cout << ' ';
        cout << '*';
        if (b != 1) // for last term
        {
            for (int s = 0; s < 2 * (b - 1) - 1; s++)
                cout << ' ';
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
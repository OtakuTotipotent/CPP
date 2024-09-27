#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length;
    cout << "Enter length of Butterfly Wings : ";
    cin >> length;

    // upper half
    for (int i = 0; i < length; i++)
    {
        // left wing
        for (int g = 0; g < i + 1; g++)
            cout << '*';
        // inner space
        for (int s = 2 * i; s < 2 * length - 2; s++)
            cout << ' ';
        // right wing
        for (int g = 0; g < i + 1; g++)
            cout << '*';
        cout << endl;
    }

    // lower half
    for (int i = 0; i < length; i++)
    {
        // left wing
        for (int g = length; g > i; g--)
            cout << '*';
        // inner spaces
        for (int s = 0; s < 2 * i; s++)
            cout << ' ';
        // right wing
        for (int g = length; g > i; g--)
            cout << '*';
        cout << endl;
    }
    return 0;
}
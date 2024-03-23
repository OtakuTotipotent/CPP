#include <iostream>
using namespace std;
int main()
{
    int u, r;
    cout << "How many numbers you are going to put here : ";
    cin >> r;
    int a[r], i;
    bool found = 0;
    for (i = 0; i < r; i++)
    {
        cout << "Enter number : ";
        cin >> a[i];
    }
    cout << "Enter the number you wanna found : ";
    cin >> u;
    for (i = 0; i < r; i++)
    {
        if (u == a[i])
        {

            cout << "\n@ Location : " << i + 1;
            found = 1;
        }
    }
    if (!found)
        cout << "\nDesired number not found anywhere!\n";
    return 0;
}
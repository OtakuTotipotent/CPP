/*
4 4 4 4
3 3 3
2 2
1
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter height of triangle : ";
    cin >> n;
    while (n > 0)
    {
        for (int i = 0; i < n; i++)
            cout << setw(4) << n;
        cout << endl;
        n--;
    }
    return 0;
}
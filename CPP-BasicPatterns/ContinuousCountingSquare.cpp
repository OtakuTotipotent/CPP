#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n = 1, l;
    cout << "Enter length : ";
    cin >> l;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << setw(4) << n++;
        }
        cout << endl;
    }
    return 0;
}
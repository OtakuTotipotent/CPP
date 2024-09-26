#include <iostream>
using namespace std;
int main()
{
    int n, val = 1;
    cout << "Enter the height of Floyd : ";
    cin >> n;
    // Pattern Printing
    for (int i = 0; i < n; i++)
    {
        for (int g = 0; g < i + 1; g++)
        {
            cout << val << "  ";
            val++;
        }
        cout << endl;
    }
    return 0;
}
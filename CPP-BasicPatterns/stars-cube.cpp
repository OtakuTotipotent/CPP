#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter height of cube : ";
    cin >> n;
    cout << "Enter width of cube : ";
    cin >> m;
    for (int i = n; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
            cout << '*' << "  ";
        cout << endl;
    }
    return 0;
}
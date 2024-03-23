#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter limit : ";
    cin >> n;
    for (int o = 1; o <= n; o++)
    {
        if (o % 2 == 0)
            for (int i = 1; i <= o; i++)
                cout << (char)(i + 64) << "  ";
        else
            for (int i = 1; i <= o; i++)
                cout << i << "  ";
        cout << endl;
    }
    return 0;
}
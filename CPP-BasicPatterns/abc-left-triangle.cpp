/*
A
B C
D E F
G H I J
K L M N O
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter height of triangle : ";
    cin >> n;
    char a = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << "  ";
            a++;
        }
        cout << endl;
    }
    return 0;
}
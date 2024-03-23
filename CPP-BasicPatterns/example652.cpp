/*
123456
 12345
  1234
   123
    12
     1
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, s;
    cout << "Enter range : ";
    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (s = n; s > i; s--)
            cout << ' ';
        for (j = 1; j < i + 1; j++)
            cout << j;
        cout << endl;
    }
    return 0;
}
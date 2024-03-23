/*
&           &
 &         &
  &       &
   &     &
    &   &
     & &
      &
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, s;
    char ch, space = ' ';
    cout << "Enter range : ";
    cin >> n;
    cout << "Enter your desird character to be printed : ";
    cin >> ch;
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < 2 * n; j++)
        {
            if (j == i || j == (2 * n - i))
                cout << ch;
            else
                cout << space;
        }
        cout << endl;
    }
    return 0;
}
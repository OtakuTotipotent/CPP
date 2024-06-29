/*
j             j
  j         j
    j     j
      j j
      j j
    j     j
  j         j
j             j
*/
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    cout << "Enter limit value : ";
    cin >> n;
    cout << "Enter character : ";
    cin >> ch;
    cout << "\n\n\n";
    for (int o = 0; o < n; o++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == o || i + o == n - 1)
                cout << ch << ' ';
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
    return 0;
}
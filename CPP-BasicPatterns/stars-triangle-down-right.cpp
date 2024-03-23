/*
********
 *******
  ******
   *****
    ****
     ***
      **
//     *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter height : ";
    cin >> n;
    for (int o = 0; o < n; o++)
    {
        for (int s = 0; s < o; s++)
            cout << "   ";
        for (int i = o; i < n; i++)
            cout << '*' << "  ";
        cout << endl;
    }
    return 0;
}

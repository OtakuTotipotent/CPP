/* making of the following pattern
1 = 1
1 + 2 = 3
1 + 2 + 3 = 6
1 + 2 + 3 + 4 = 10
1 + 2 + 3 + 4 + 5 = 15 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, s, m, limit;
    cout << "Enter a limiting number : ";
    cin >> limit;
    for (n = 1; n < limit + 1; n++)
    {
        cout << '1';
        s = 1;
        for (m = 2; m <= n; m++)
        {
            cout << '+' << m;
            s = s + m;
        }
        cout << '=' << s << endl;
    }
    return 0;
}
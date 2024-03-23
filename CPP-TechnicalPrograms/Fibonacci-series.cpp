#include <iostream>
using namespace std;
int main()
{
    int s = 0, m = 1, n = 1;
    cout << m << "\t" << n << "\t";
    while (s < 89)
    {
        s = n + m;
        cout << s << "\t";
        m = n;
        n = s;
    }
    return 0;
}
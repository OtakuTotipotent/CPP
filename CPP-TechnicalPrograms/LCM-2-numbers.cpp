#include <iostream>
using namespace std;
int main()
{
    int n1, n2, m, lcm;
    cout << "Enter 1st number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;
    if (n1 > n2)
        m = n1;
    else
        m = n2;
    while (m <= n1 * n2)
    {
        if (m % n1 == 0 && m % n2 == 0)
        {
            lcm = m;
            break;
        }
        else
            m++;
    }
    cout << "\nThe L.C.M. is : " << lcm << endl
         << endl;
}
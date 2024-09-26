#include <iostream>
using namespace std;
int pwrFunc(int, int);
int main()
{
    int power, base;
    cout << "Enter Base value : ";
    cin >> base;
    cout << "Enter Power value: ";
    cin >> power;

    cout << base << '^' << power << " : " << pwrFunc(base, power);
    return 0;
}
int pwrFunc(int b, int p)
{
    if (p == 0)
        return 1;
    return b * pwrFunc(b, p - 1);
}

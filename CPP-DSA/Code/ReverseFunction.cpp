#include <iostream>
using namespace std;
void reverseNumber(int *n)
{
    int ans = 0;
    while (*n > 0)
    {
        int d = *n % 10;
        ans = ans * 10 + d;
        *n /= 10;
    }
    *n = ans;
}
int main()
{
    int num = 2341;
    reverseNumber(&num);
    cout << num;
    return 0;
}
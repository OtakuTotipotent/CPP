#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1 = 299, n2 = 10;
    int ans = n1 + n2;
    cout << "ans : " << ans << endl;
    string str = "";
    cout << "str : " << str << endl;
    str += to_string(n1) + " + " + to_string(n2) + " = " + to_string(ans);
    cout << "str : " << str << endl;

    return 0;
}
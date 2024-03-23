// printing all the possible combinations of 1,2,3
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    for (a = 1; a < 4; a++)
    {
        for (b = 1; b < 4; b++)
        {
            for (c = 1; c < 4; c++)
            {
                cout << a << b << c << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
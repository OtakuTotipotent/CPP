#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s[7], temp;
    int x, y, i, limit;
    for (i = 0; i < 7; i++) // getting inputs
    {
        cout << "Enter string : ";
        getline(cin, s[i]);
    }

    for (i = 0; i < 6; i++)
    {
        for (x = i + 1; x < 7; x++)
        {
            if (s[i] > s[x])
            {
                temp = s[i];
                s[i] = s[x];
                s[x] = temp;
            }
        }
    }

    cout << endl; // printing the final output
    for (int i = 0; i < 7; i++)
    {
        cout << s[i];
        cout << endl;
    }
    return 0;
}

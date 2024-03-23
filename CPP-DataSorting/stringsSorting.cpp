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
    for (i = 0; i < 7; i++) // case conversion to perfectly compare all strings
    {
        transform(s[i].begin(), s[i].end(), s[i].begin(), ::tolower);
    }

    for (i = 0; i < 6; i++)
    {
        for (x = i + 1; x < 7; x++)
        {
            if (s[i][0] >= s[x][0]) // if s[i][0] greater or equal: if equal, then next character should be compared
            {
                if (s[i][0] == s[x][0]) // next character comparison
                {
                    if (s[i].length() > s[x].length())
                        limit = s[x].length();
                    else
                        limit = s[i].length();
                    for (y = 0; y < limit; y++)
                    {
                        if (s[i][y] > s[x][y])
                        {
                            temp = s[i];
                            s[i] = s[x];
                            s[x] = temp;
                            break;
                        }
                    }
                }
                else // simple 1st step swapping is done
                {
                    temp = s[i];
                    s[i] = s[x];
                    s[x] = temp;
                }
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

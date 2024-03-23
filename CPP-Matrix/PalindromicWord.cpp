#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char msg[100];
    int i;
    bool equal = 1;
    cout << "Enter message : ";
    gets(msg);
    for (i = 0; i <= (strlen(msg) / 2); i++)
    {
        if (msg[i] != msg[strlen(msg) - 1 - i])
            equal = 0;
    }
    if (equal)
        cout << "Equality sustained";
    else
        cout << "NON Equal";
    return 0;
}
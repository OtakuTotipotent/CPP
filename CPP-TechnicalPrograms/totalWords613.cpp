#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    string ch;
    int spaces = 0;
    cout << "Enter a sentence here : ";
    getline(cin, ch);
    for (int i = 0; i < ch.length(); i++)
    {
        if (ch[i] == ' ')
            spaces++;
    }
    cout << "words : " << ++spaces;
    return 0;
}

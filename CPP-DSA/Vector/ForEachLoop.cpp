#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> englishLetters = {'a',
                                   'b',
                                   'c',
                                   'd',
                                   'e',
                                   'f'};

    // printing output
    for (char val : englishLetters) // for-each loop
        cout << val << endl;

    return 0;
}
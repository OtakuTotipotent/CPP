// values accessing & other data manipulation operations
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> englishLetters = {22, 33, 44};

    englishLetters.push_back(99); // adds to end of vector
    // printing output
    for (int i = 0; i < englishLetters.size(); i++)
    {
        cout << englishLetters[i] << '\t';    // same as array
        cout << englishLetters.at(i) << endl; // pure vectors oriented function
    }

    cout << endl
         << endl;

    englishLetters.pop_back(); // deletes the last element

    // printing output
    for (int val : englishLetters) // for-each loop
        cout << val << endl;

    return 0;
}
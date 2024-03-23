#include <iostream>
using namespace std;

int main()
{
    string sentences[5], temp;
    for (int i = 0; i < 5; i++)
        getline(cin, sentences[i]);
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (sentences[i] > sentences[j])
            {
                temp = sentences[i];
                sentences[i] = sentences[j];
                sentences[j] = temp;
            }
    cout << "\n Sentences in Alphabetical order : \n";
    for (int i = 0; i < 5; i++)
        cout << sentences[i] << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Stack
{
    int top;
    char stackArray[100];

public:
    Stack()
    {
        top = -1;
    }
    void push(char c)
    {
        top++;
        stackArray[top] = c;
    }
    void display()
    {
        while (top > -1)
        {
            cout << stackArray[top];
            top--;
        }
    }
};

int main()
{
    Stack s;
    string userInput;
    cout << "Enter message : ";
    getline(cin, userInput);

    for (int i = 0; i < userInput.length(); i++)
    {
        s.push(userInput[i]);
    }
    s.display();

    return 0;
}
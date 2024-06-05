#include <iostream>
using namespace std;
class Stack
{
private:
    int top;
    int stackArray[30];

public:
    Stack()
    {
        top = -1;
    }
    void convertToBinary(int n)
    {
        while (n > 0)
        {
            push(n % 2);
            n = n / 2;
        }
    }
    void push(int digit)
    {
        if (top == 30)
            cout << "Overflow\n";
        else
        {
            top++;
            stackArray[top] = digit;
        }
    }
    void showBinary()
    {
        while (top >= 0)
        {
            cout << stackArray[top];
            top--;
        }
    }
};
int main()
{
    int userInput;
    Stack s;
    cout << "Enter a number : ";
    cin >> userInput;
    s.convertToBinary(userInput);
    s.showBinary();

    return 0;
}
#include <iostream>
using namespace std;
class Stack
{
    int top = -1;
    int stack[5];

public:
    void push()
    {
        if (top >= 4)
            cout << "\nStack overflow!\n";
        else
        {
            int n;
            cout << "\nEnter number : ";
            cin >> n;
            top++;
            stack[top] = n;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "\nStack Empty\n";
        else
        {
            cout << stack[top] << " popped!\n";
            top--;
        }
    }
    void display()
    {
        if (top == -1)
            cout << "\nStack Empty\n";
        else
        {
            cout << "\nStack contains " << top + 1 << " elements @size:" << 5 << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << i << " : " << stack[i] << endl;
            }
        }
    }
};
int main()
{
    char choice;
    Stack stackOne;
    while (1)
    {
        cout << "\n1. Display  Stack\n";
        cout << "2. Push in  Stack\n";
        cout << "3. Pop from Stack\n";
        cout << "0. Exit   Program\n";
        cout << "~  Enter choice : ";
        cin >> choice;
        if (choice == '0')
            exit(0);
        else if (choice == '1')
        {
            stackOne.display();
            system("pause");
        }
        else if (choice == '2')
        {
            stackOne.push();
        }
        else if (choice == '3')
        {
            stackOne.pop();
            system("pause");
        }
        else
        {
            cout << "\nerror : invalid choice\n";
        }
    }
    return 0;
}
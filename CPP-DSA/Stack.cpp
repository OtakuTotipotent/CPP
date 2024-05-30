#include <iostream>
#define size 5
int top = -1;    // -1 to check the availability status
int stack[size]; // the array: the Stack
using namespace std;
void push();
void pop();
void display();

// MAIN FUNCTION
int main()
{
    while (1) // to give the menu of choices
    {
        char choice;
        system("cls");
        cout << "1. Push in Stack \n2. Pop from Stack \n3. Display the Stack \n0. Exit the Program\n";
        cout << "~  Enter choice : ";
        cin >> choice;
        if (choice == '0')
        {
            cout << "\nProgram exited!\n\n";
            exit(0);
        }
        else if (choice == '1')
            push();
        else if (choice == '2')
            pop();
        else if (choice == '3')
            display();
        else
        {
            cout << "\nerror : invalid choice!\n";
            system("pause");
        }
    }
    return 0;
}

// UTILITY FUNCTIONS
void push()
{
    if (top >= size - 1)
        cout << "\n Stack is Full!\n";
    else
    {
        for (int i = 0; i < size; i++)
        {
            int value;
            cout << "Enter value to be pushed : ";
            cin >> value;
            top++;
            stack[top] = value;
        }
        cout << "\nPushed in Stack successfully!\n";
    }
    system("pause");
}
void pop()
{
    if (top == -1)
        cout << "\nStack is empty!\n\n";
    else
    {
        cout << stack[top] << " removed from stack\n";
        top--;
    }
    system("pause");
}
void display()
{
    if (top == -1) // used for both the Never Used case & All Data Deleted case
        cout << "\nStack is Empty\n";
    else
    {
        cout << "\nStack of size = " << size << " & elements = " << top + 1 << endl;
        for (int i = 0; i <= top; i++)
            cout << i << " : " << stack[i] << endl;
    }
    cout << endl;
    system("pause");
}
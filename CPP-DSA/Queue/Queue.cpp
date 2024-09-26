#include <iostream>
#define size 5 // constant size for Queue
using namespace std;
int front = 0, back = -1; // to keep track of data & manipulations
int queue[size];          // Queue of size 5

void insert();
void removeElement();
void display();

// MAIN FUNCTION
int main()
{
    while (1) // to give the menu of choices
    {
        char choice;
        system("cls");
        cout << "1. Insert in Queue \n2. Remove from Queue \n3. Display the Queue \n0. Exit the Program\n";
        cout << "~  Enter choice : ";
        cin >> choice;
        if (choice == '0')
        {
            cout << "\nProgram exited!\n\n";
            exit(0);
        }
        else if (choice == '1')
            insert();
        else if (choice == '2')
            removeElement();
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
void display()
{
    if (back == -1 || front >= back)
        cout << "\nQueue is empty\n";
    else
    {
        cout << "\nThe Queue contains size : " << size << " & elements : " << back - front << endl;
        for (int i = front; i < back; i++)
            cout << i << " : " << queue[i] << endl;
    }
    cout << endl;
    system("pause");
}
void insert()
{
    if (back == size)
    {
        cout << "\nQueue is full!\n";
        system("pause");
    }
    else
    {
        if (back == -1) // only satisfies for 1st time insertion
            back = 0;
        int value;
        cout << "Enter value to be pushed : ";
        cin >> value;
        queue[back] = value;
        back++; // here, back controls the filling of queue
    }
}
void removeElement()
{
    if (back == -1 || front >= back)
    {
        cout << "\nQueue is empty!\n";
        if (front >= back) // Resets the Queue to insert again
        {
            front = 0;
            back = -1;
        }
    }
    else
    {
        cout << queue[front] << " removed from Queue\n";
        front++;
    }
    cout << endl;
    system("pause");
}

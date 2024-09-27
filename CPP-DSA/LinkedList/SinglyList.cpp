#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class SingleLinkedList
{
    Node *head;

public:
    SingleLinkedList()
    {
        head = NULL;
    }
    void insertAtBeginning()
    {
        int value;
        cout << "\nEnter number : ";
        cin >> value;
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd()
    {
        int value;
        cout << "\nEnter number : ";
        cin >> value;
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
            head = newNode;
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void showList()
    {
        if (head == NULL)
            cout << "\nNothing Found\n";
        else
        {
            Node *temp = head;
            do
            {
                cout << temp->data << "  ";
                temp = temp->next;
            } while (temp != NULL);
        }
    }
};
int main()
{
    char choice;
    SingleLinkedList slOne;
mainMenu:
    system("cls");
    cout << "1. Show List\n";
    cout << "2. Insert at End\n";
    cout << "3. Insert at Beginning\n";
    cout << "4. Delete a Node from End\n";
    cout << "5. Delete a Node anywhere\n";
    cout << "6. Delete a Beginning Node\n";
    cout << "7. Delete All List & Nodes\n\n";
    cout << "0. Exit this Program \n\n";

    cout << ".. Enter choice here : ";
    cin >> choice;

    switch (choice)
    {
    case '0':
        cout << "\nProgram closed\n";
        return 0;
        break;
    case '1':
        slOne.showList();
        break;
    case '2':
        slOne.insertAtEnd();
        break;
    case '3':
        slOne.insertAtBeginning();
        break;
    case '4':
        break;
    case '5':
        break;
    case '6':
        break;
    case '7':
        break;

    default:
        break;
    }
    cout << "\n\n"
         << system("pause");
    goto mainMenu;
    return 0;
}
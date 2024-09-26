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
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head = newNode;
    }
    void insertAtEnd(int value)
    {
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
        Node *temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
};
int main()
{
    SingleLinkedList slOne;
    slOne.insertAtBeginning(10);
    slOne.insertAtBeginning(20);
    slOne.insertAtEnd(11);
    slOne.showList();
    return 0;
}
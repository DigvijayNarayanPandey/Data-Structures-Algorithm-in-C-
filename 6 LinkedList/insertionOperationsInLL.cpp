#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Insert at the Beginning of a Linked List
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the End of Linked List
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)       // Means the list is empty so eventually the newNode becomes the first and last node of LL
        {
            head = newNode;         // Here newNode becomes head and the program terminates 
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insertion at any position or at the middle of the Linked List
    void insertAtAnyPosition(int value, int pos)
    {
        if (pos <= 0)
        {
            cout << "Position must be grater than 0!";
            return;
        }

        if (pos == 1)
        {
            insertAtBeginning(value);
            return;
        }

        if (head == nullptr)    // If the list is empty you can't move forward in it
        {
            cout << "List is Empty!";
            return;
        }

        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            if (temp->next == nullptr) // suppose length of the LL is 3 and you enter pos = 4 so this prevents program from crashing bcz we have already reached the last node and hence 4 is out of bound
            {
                cout << "Position is out of range!";
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "Null\n";
    }

    ~LinkedList()
    {
        Node *temp = head;
        while (temp)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main()
{
    LinkedList ll;

    ll.insertAtBeginning(45);
    ll.insertAtEnd(55);
    ll.printLL();
    ll.insertAtAnyPosition(65, 1);
    ll.insertAtBeginning(95);
    ll.printLL();
    ll.insertAtAnyPosition(90, 2);
    ll.insertAtEnd(100);
    ll.printLL();

    return 0;
}
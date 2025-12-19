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

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Delete node from start
    void deletefromStart()
    {
        if (head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // Delete node from end
    void deleteFromEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;

        // Reach second-last node
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
    }

    // Delete from any position (1-based index)
    void deleteAnyPosition(int pos)
    {
        if (head == nullptr)
        {
            cout << "List is empty\n";
            return;
        }

        if (pos <= 0)
        {
            cout << "Invalid position\n";
            return;
        }

        if (pos == 1)
        {
            deletefromStart();
            return;
        }

        Node *temp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            if (temp->next == nullptr)
            { // checks if the list end before the desired position or not
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }

        if (temp->next == nullptr)
        { // Checks if the Node you actually want to delete exists or not because for loop only guranttees about the correct position what if there is no element after the last position then this logic will work
            cout << "Position out of range\n";
            return;
        }

        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
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
        while (head != nullptr)
        {
            deletefromStart();
        }
    }
};

int main()
{
    LinkedList ll;

    ll.insertAtBeginning(45);
    ll.insertAtBeginning(55);
    ll.insertAtBeginning(65);
    ll.insertAtBeginning(75);
    ll.insertAtBeginning(85);
    ll.printLL();

    ll.deletefromStart();
    ll.printLL();

    ll.deleteFromEnd();
    ll.printLL();

    ll.deleteAnyPosition(2);
    ll.printLL();

    return 0;
}

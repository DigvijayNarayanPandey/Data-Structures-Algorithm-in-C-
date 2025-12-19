#include <iostream>
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

    void InsertionAtStart(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    int LengthOfList()
    {
        int count = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void search(int value)
    {
        Node *temp = head;
        int position = 1;

        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                cout << "Element found at index: " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }

        cout << "Element not found!" << endl;
    }

    void Display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    ~LinkedList()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = nullptr;
    }
};

int main()
{
    LinkedList list;

    list.InsertionAtStart(23);
    list.InsertionAtStart(55);
    list.InsertionAtStart(65);
    list.InsertionAtStart(75);

    list.Display();
    cout << "Length of the Linked List: " << list.LengthOfList() << endl;

    list.search(55);

    return 0;
}

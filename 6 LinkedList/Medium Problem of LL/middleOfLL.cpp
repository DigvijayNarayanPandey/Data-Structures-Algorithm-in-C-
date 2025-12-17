#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode *createList()
    {
        cout << "Enter number of elements: ";
        int n;
        cin >> n;
        if (n == 0)
            return nullptr;

        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (!head)
            {
                head = new ListNode(val);
                tail = head;
            }
            else
            {
                tail->next = new ListNode(val);
                tail = tail->next;
            }
        }
        return head;
    }

    void printList(ListNode *head)
    {
        while (head)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main()
{
    solution sol;
    ListNode *head = sol.createList();
    cout << "Original list: ";
    sol.printList(head);

    ListNode *middle = sol.middleNode(head);
    cout << "List from middle: ";
    sol.printList(middle);
    return 0;
}
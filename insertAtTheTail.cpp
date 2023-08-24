#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = next;
    }
};
void InsertAtTail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void PrintLinkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    cout << "option 1: insert at the tail" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        int val;
        cin >> val;
        InsertAtTail(head, val);
    }
    PrintLinkedList(head);
}
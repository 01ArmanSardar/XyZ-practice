#include  <bits/stdc++.h>
using namespace std;
class Node 
{
public:
int val;
Node *next ;
Node (int val)
{
    this->val=val;
    this->next =NULL;

}
};
void insertInTheTail(Node *&head,int v)
{
    Node *newnode = new Node(v);
    if (head==NULL)
    {
        head =newnode ;
        return;
    } 

    Node * tmp=head;
    while (tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;

}
void PrintLinkedList(Node *head)
{
    Node *tmp=head;
    while (tmp!=NULL)
    {
cout << tmp->val<<" ";
tmp=tmp->next;
    }
}

int main ()
{
    Node *head =NULL; 
    cout <<"option 1: insetr the tail"<<endl;
    int op;
    cin >>op;
    if (op==1)
    {
int v;
cin >> v;
insertInTheTail(head,v);
    }
    PrintLinkedList(head);
}
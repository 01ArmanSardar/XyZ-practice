#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // queue tekeh bher koreh eneh khotay rakbho jmn 'f' er modde raklam
        Node *p = q.front();
        q.pop();
        // tarpor jabotyio kaj korbho
        int l, r;
        cin >> l >> r;
        Node *subleft;
        Node *subright;

        if (l == -1)
            subleft = NULL;
        else
            subleft = new Node(l);
        if (r == -1)
            subright = NULL;
        else
            subright = new Node(r);
        p->left = subleft;
        p->right = subright;
        // children gulo keh push korbho
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void levelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "tree nai";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1 . ber kore anah
        Node *f = q.front();
        q.pop();
        // 2 .jabotiyo ja kaj ache
        cout << f->val << " ";
        // 3 . children gulh keh rakah
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
void Insert_Bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left == new Node(x);
        }
        else
        {
            Insert_Bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right == new Node(x);
        }
        else
        {
            Insert_Bst(root->right, x);
        }
    }
}
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    Insert_Bst(root, x);
    levelOrder(root);

    return 0;
}


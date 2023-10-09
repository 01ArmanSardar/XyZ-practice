#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    MyStack st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    MyStack st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st2.push(y);
    }
    // int flag = 1;
    if (st1.size() == st2.size())
    {

        int flag = 1;
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = 0;
            }
          st1.pop();
          st2.pop();

        }
        if (flag == 0)
            cout << "no";
        else
            cout << "yes";
    }
    // else if (flag == 0)
    // cout << "no";
    else
    {
        cout << "NO";
    }
}

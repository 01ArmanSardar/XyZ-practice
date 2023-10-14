#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    if (st.size() == q.size())
    {
        int flag = 1;
        while (!st.empty())
        {
            if (st.top() == q.front())
            {

           st.pop();
                q.pop();
            }
            else
            {
               flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "no";
        else
            cout << "yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

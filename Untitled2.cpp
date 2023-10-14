#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int > st,st2;
    int n;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        st.push(x);
    }
    while (!st.empty())
   {
st2.push(st.top());
   }
   while (!st2.empty())
   {
    cout <<st2.top()<<endl;
    st2.pop();
   }

    return 0;
}

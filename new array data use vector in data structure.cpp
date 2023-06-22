
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int ar[n];
    int br[n];
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
        cin>>br[i];
    }
   vector <int>ans={br.begin(),br.end()};
    ans.insert (ans.begin(),+(ans.end()-1),ar.begin(),ar.end());
    for (int value:ans)
    {
        cout << value;
    }
}

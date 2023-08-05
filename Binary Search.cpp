#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >>n>>q;
    int ar[n];
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    sort (ar,ar+n);
    while (q--)
    {
        int mid,x;
        cin>>x;
    int    l=0;
     int   r=n;
        bool flag =false ;
        while (l<=r)
        {
         int   mid=(l+r)/2;
            if (ar[mid]==x)
            {
                flag=true ;
                break;
            }
            if (x>ar[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if (flag ==true ) cout << "found"<<endl;
        else cout <<"not found"<<endl;
    }//
}

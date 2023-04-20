#include<stdio.h>
int main()
{
    //1st array  input
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i =0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    // second array input
    int m;
    scanf("%d",&m);
    int br[m];
    for (int i =0; i<m; i++)
    {
        scanf("%d",&br[i]);
    }
    //third array & third array teh 1st  array  er  value rakha
    int ans [n+m];
    for (int i=0; i<n; i++)
    {
        ans[i]=ar[i];
    }
    //third array teh 2nd array er value rakha
    int i=n;
    for (int j=0; j<m; j++)
    {
        ans[i]=br[j];
        i++;
    }
    for (int i=0; i<n+m; i++)
    {
        printf("%d ",ans[i]);
    }
}

#include<stdio.h>
int main()
{
    int n;
    int i,pos,val;
    scanf("%d",&n);
    scanf("%d %d ",&pos,&val);
    int ar [n+1];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos] =val;
    for (i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
}


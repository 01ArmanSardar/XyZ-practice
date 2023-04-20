#include<stdio.h>
int main ()
{
    int i,pos,vl,n;
    scanf("%d",&n);
    int ar[n+1];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d %d",&pos,&vl);
    for (i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=vl;
    for (i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
}

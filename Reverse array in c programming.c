#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
   int  ar[n];
   for (i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
  i=0;j=n-1;
   while (i<j)
   {
       temp=ar[i];
       ar[i]=ar[j];
       ar[j]=temp;
       i++;
       j--;
   }
   for (i=0;i<n;i++)
   {
       printf("%d ",ar[i]);
   }
}

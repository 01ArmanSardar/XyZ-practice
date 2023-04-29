#include<stdio.h>
#include<string.h>
int main ()
{
    char ar [84];
    char br [89];
    scanf("%s %s",&ar,&br);
    for (int i =0; i<=strlen(br); i++)
    {


        ar[i]=br[i];
    }
    printf("%s %s",ar,br);
}

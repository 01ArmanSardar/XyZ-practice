
#include <stdio.h>
int main()
{
    char ch ;
    scanf("%c",&ch);
//printf("%d",ch);
    if (ch >= 97 && ch <=122)
    {
        int ans =ch -32;
        printf("%c",ans);
    }
    if (ch >=65 && ch<=90 )
    {
        int ans = ch +32;
        printf("%c",ans);
    }
}

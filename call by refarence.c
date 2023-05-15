#include <stdio.h>
void sun (int *p)
{
    *p=78;
}
int main()
{
    int x =90;
    sun(&x);
    printf("%d",x);
}

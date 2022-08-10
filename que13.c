#include <stdio.h>
int main ()
{
    int x=123,q,r;
    q=x/10;
    r=x%10;
    x=3*100+q;
    printf("%d", x);
    return 0;
}
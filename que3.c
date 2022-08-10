#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" enter  two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("Swap number is : %d %d", a,b);
    return 0;

}
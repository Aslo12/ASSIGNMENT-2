#include<stdio.h>
int main()
{
    int a,b;
    printf(" enter  two number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Swap number is : %d %d", a,b);
    return 0;
}
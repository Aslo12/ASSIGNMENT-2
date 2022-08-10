#include<stdio.h>
int main()
{

    int x;
    int append;
    printf("Enter number & input append digit");
    scanf("%d%d",&x,&append);
    x=x*10;
    x=x+append;
    printf("%d",x);
    return 0;

}
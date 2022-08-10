#include<stdio.h>
int main()
{
    int x; 
    int sum=0,rem=0;
    printf("enter three digit number");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=sum+ rem ;
   
   rem=x%10;
    x=x/10;
    sum=sum+ rem ;

    rem=x%10;
    x=x/10;
    sum=sum+ rem ;
    printf("%d",sum);
    return 0;

}
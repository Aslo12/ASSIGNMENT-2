#include<stdio.h>
int main ()
{
    int rs;
    printf("enter rupees");
    scanf("%d",&rs);
    float usd= rs / 76.23;
    printf("%d rs=%.2f dollar",rs ,usd);
    return 0;
}
#include <stdio.h>
int main ()
{
    int x;
    
    printf("Enter Number\n");
    scanf("%d", &x);  
     int result=x&1;
    if (result==1)
    
        printf("odd number");
     else

     printf("even number");
      
    return 0;

}
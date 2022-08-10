#include<stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    double d;

    a=sizeof(int);
    printf(" Size of int data type is : %lu\n",a);

    b=sizeof(float);
    printf("Size of float data type is : %f\n",b);

    ch=sizeof(char);
    printf(" Size of char data type is : %lu\n",ch);

    d=sizeof(double);
    printf(" Size of double data type is : %lf\n",d);
    
    return 0;
    
    
    }
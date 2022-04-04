#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("the address of the variable is %u",&a);
    printf("the value of variable a is %d",*ptr);
    return 0;
}
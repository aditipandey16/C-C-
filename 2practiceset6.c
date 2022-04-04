#include<stdio.h>
void print(int i)
{
    printf("the address is %u",&i);
}
int main()
{
    int i;
    int *ptr;
    ptr=&i;
    print(i);
    printf("the address of i is: %u",ptr);
}
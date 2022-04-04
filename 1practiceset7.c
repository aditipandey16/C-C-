#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr=&arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("These point at the same address\n");

    }
    else{
        printf("No");
    }
}

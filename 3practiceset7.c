#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0;i<=10;i++)
    {
        arr[i]=5*(i+1);
        printf("5* %d=%d\n",i+1,arr[i]);

    }
}
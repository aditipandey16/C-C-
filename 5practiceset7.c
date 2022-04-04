#include<stdio.h>
int reverse(int *arr,int n)
{
    int i,temp;
    for(i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7},i;
    reverse(arr,7);
    for(i=0;i<7;i++)
    {
        printf("%d",arr[i]);
    }
}
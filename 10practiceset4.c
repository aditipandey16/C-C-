#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        printf("not prime");
        else
        printf("prime");
        return;
    }
    printf("prime");
}
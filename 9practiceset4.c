#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,fact=1;
    printf("enter number\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("factorial is 1");
    }
    else{
        i=1;
        while(i<=n)
        {
            fact=fact*i;
            i++;
        }
        printf("factorial is equal to %d",fact);
    }
}
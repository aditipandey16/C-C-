#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
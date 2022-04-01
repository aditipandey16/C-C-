#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,sum;
    printf("enter number\n");
    scanf("%d",&n);
    sum=0;
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum is %d",sum);
    return 0;
}

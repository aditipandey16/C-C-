#include<stdio.h>
int fib(int n)
{
    int ans;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    {
        ans=fib(n-1)+fib(n-2);
        return ans;
    }
}
int main()
{
    int n,ans;
    printf("Enter the number: ");
    scanf("%d",&n);
    ans=fib(n);
    printf("%d",ans);
    return 0;
}
#include<stdio.h>
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");

        }
        printf("\n");
    }
}
int main()
{
    int n=3;
    pattern(n);
    return 0;
}
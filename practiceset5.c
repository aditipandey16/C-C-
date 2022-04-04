#include<stdio.h>
float avg(int a,int b,int c)
{
    float average;
    
    average=(float)(a+b+c)/3;
    return average;
}
void main()
{
    int a,b,c;
    printf("enter num1: ");
    scanf("%d",&a);
    printf("enter num2: ");
    scanf("%d",&b);
    printf("enter num3: ");
    scanf("%d",&c);
    printf("%f",avg(a,b,c));
}
#include<stdio.h>
void main()
{
    float income,tax=0;
    printf("enter income in lakhs\n");
    scanf("%d",&income);
    if(income>2.5 && income<=5.0)
    {
        tax=tax+0.05*(income-2.5); 
    }   
    if(income>5.0 && income<=10.0)
    {
        tax=tax+0.20*(income-5.0);

    }
    if(income>10.0)
    {
        tax=tax+0.30*(income-10.0);
    }
    printf("tax is %f",tax);
}
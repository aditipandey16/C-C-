#include<stdio.h>
void main()
{
    int mark1,mark2,mark3;
    float per,per1,per2,per3;
    printf("enter mark 1 out of 100\n");
    scanf("%d",&mark1);
    printf("enter mark 2 out of 100\n");
    scanf("%d",&mark2);
    printf("enter mark 3 out of 100\n");
    scanf("%d",&mark3);
    per1=(mark1/100)*100;
    per2=(mark2/100)*100;
    per3=(mark3/100)*100;
    per=(mark1+mark2+mark3)/3;
    if((per<=40) || (per1<=33) || (per2<=33) || (per3<=33))
    printf("Fail");
    else
    printf("Pass %f",per);
}
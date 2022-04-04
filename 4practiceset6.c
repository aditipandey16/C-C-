#include<stdio.h>>
void sumandavg(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)(a+b)/2;

}
int main()
{
    int i=3,sum;float avg;
    int j=4;
    sumandavg(i,j,&sum,&avg);
    printf("%d %.2f ",sum,avg);

}
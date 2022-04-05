#include<stdio.h>
typedef struct complex{
    int real;
    int imag;
}comp;
void display(comp c)
{
    printf("the value of real part is %d\n",c.real);
    printf("the value of imaginary part is %d\n",c.imag);
}
int main()
{
    comp cnums[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the real value \n");
        scanf("%d",&cnums[i].real);
        printf("enter the imag part\n");
        scanf("%d",&cnums[i].imag);

    }
    for(int i=0;i<5;i++)
    {
        display(cnums[i]);
        
    }
}
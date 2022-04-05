#include<stdio.h>
typedef struct date
{
    int year;
    int month;
    int date;
}date;
void display(date d)
{
    printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
}
int datecom(date d1,date d2)
{
    if(d1.year>d2.year)
    return 1;
    if(d1.year<d2.year)
    return -1;
    if(d1.month>d2.month)
    return 1;
    if(d1.month<d2.month)
    return -1;
    if(d1.date>d2.date)
    return 1;
    if(d1.date<d2.date)
    return -1;
    return 0;
}
int main()
{
    date d1={2002,11,16};
    date d2={1996,05,8};
    display(d1);
    display(d2);
    int a=datecom(d1,d2);
    printf("date comparision returns %d",a);
    return 0;
}
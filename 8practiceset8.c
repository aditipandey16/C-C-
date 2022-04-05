#include<stdio.h>
int occurence(char *st,char c)
{
    char *ptr=st;
    int count=0;
    while (*ptr!='\0')
    {
        if(*ptr==c)
        count++;
        ptr++;
    }
    return count;
}
int main()
{
    char st[]="Aditi";
    int l;
    l=occurence(st,'i');
    printf("the count is %d",l);
    return 0;
}
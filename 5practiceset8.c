#include<stdio.h>
void strcopy(char *st1,char *st2)
{
    int i=0;
    while(st1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(st2[j]!='\0')
    {
        st1[i]==st2[j];
        i++;
        j++;
    }
}
int main()
{
    char st1[]="Aditi";
    char st2[]="Pandey";
    strcopy(st1,st2);
    printf("the str is %s",st1);
    return 0;
}
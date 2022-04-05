#include<stdio.h>
void slice(char *st,int start,int end)
{
    int i=0;
    while((start+i)<end)
    {
        st[i]=st[i+start];
        i++;
    }
    st[i]='\0';
}
int main()
{
    char st[]="Aditi";
    slice(st,1,4);
    printf("%s",st);
    return 0;
}
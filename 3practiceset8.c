#include<stdio.h>
#include<string.h>
int stlen(char *st)
{
    char *ptr=st;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[]="Aditi";
    int l=stlen(st);
    printf("the length is %d",l);
    return 0;

}
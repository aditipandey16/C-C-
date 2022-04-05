#include<stdio.h>
#include<string.h>
int main()
{
    char st1[34];
    char st2[34];
    printf("enter string 1 ");
    scanf("%s",st1);
    char c;
    int i=0;
    fflush(stdin);
    scanf("%c",&c);
    while(c!='\n')
    {
        
        st2[i]=c;
        scanf("%c",&c);
        i++;
    }
    st2[i]='\0';
    printf("the value of st1 is %s",st1);
    printf("the value of st2 is %s",st2);
}
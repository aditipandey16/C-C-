#include<stdio.h>

int main()
{
    FILE *ptr;
    int a,b,c;
    ptr=fopen("aa.doc","w");
    fprintf(ptr,"12 23 45\n");
    fclose(ptr);
    ptr=fopen("aa.doc","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("the values are %d %d %d\n",a,b,c);
    fclose(ptr);
    return 0;
}
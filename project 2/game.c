#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp)
{
    if(you==comp)
    return 0;
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    return -1;
    if(you=='s' && comp=='g')
    return -1;
    else if(you=='g' && comp=='s')
    return 1;
    if(you=='w' && comp=='g')
    return 1;
    else if(you=='g' && comp=='w')
    return -1;


}
int main()
{
    char you,comp;
    int number;
    srand(time(0));
    number=rand()%100+1;
    if(number<33)
    {
        comp='s';
    }
    else if(number>33 && number<66)
    {
        comp='w';
    }
    else{
        comp='g';
    }
    printf("Enter s for snake\n w for water\n g for gun\n");
    scanf("%c",&you);
    int result=snakewatergun(you,comp);
    printf("you chose %c and computer chose %c.",you,comp);
    if(result==0)
    {
        printf("Game draw\n");
    }
    else if(result==1)
    {
        printf("You WIN\n");
    }
    else{
        printf("You Lose\n");
    }
    return 0;
}
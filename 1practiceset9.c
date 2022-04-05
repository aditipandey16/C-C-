#include<stdio.h>
struct vect
{
    int x;
    int y;
};
int main()
{
    struct vect v1,v2;
    v1.x=34;
    v1.y=54;
    printf("X dim is %d Y dim is %d",v1.x,v1.y);
    v2.x=134;
    v2.y=514;
    printf("X dim is %d Y dim is %d",v2.x,v2.y);

    return 0;
}
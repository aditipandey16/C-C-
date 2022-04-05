#include<stdio.h>
struct vect
{
    int x;
    int y;
};
struct vect sumVector(struct vect v1,struct vect v2)
{
    struct vect result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
};
int main()
{
    struct vect v1,v2,sum;
    v1.x=34;
    v1.y=54;
    printf("X dim is %d Y dim is %d\n",v1.x,v1.y);
    v2.x=134;
    v2.y=514;
    printf("X dim is %d Y dim is %d\n",v2.x,v2.y);
    sum=sumVector(v1,v2);
    printf("X dim of result is %d Y dim of result is %d\n",sum.x,sum.y);
    return 0;
}
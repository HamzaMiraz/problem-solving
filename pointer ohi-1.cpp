#include<stdio.h>

int main()
{
    int *v;//declaring pointer variable
    int x = 12;
    v = &x;///v= address of x

    printf("%d\n",x);
    printf("%d\n",v);
    printf("%d\n",&v);
    printf("%d\n",*v);
    *v=102;
    printf("%d\n",x);
//     int x;
//     int &r=x;
//     x=5;
//     printf("%d\n",r);
//     x+=x;
//     printf("%d",r);

    return 0;
}


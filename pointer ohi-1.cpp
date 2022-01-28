#include<stdio.h>

int main()
{
    int *v;//declaring pointer variable
    int x = 12;
    v = &x;

    printf("%d\n",v);
    printf("%d\n",&v);
    printf("%d\n",*v);
    x =112312;
    printf("%d\n",*v);

    return 0;
}


#include<stdio.h>

int main()
{
    int a[20];
    int x,y;
    x=sizeof(a);
    y=sizeof(int);

    int size = x/y;
    printf(" size of a = %d\n\n ",x);
    printf("size of int = %d\n\n",y);
    printf(" array size = %d\n",size);

    return 0;

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void go(int *a,int *b)
{
    int c=*a;
       *a=*b;
        *b=c;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    go(&a,&b);

    printf("After swapping :\n a=%d\n b=%d\n",a,b);
    return 0;
}

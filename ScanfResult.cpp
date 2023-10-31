#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int a,b,c, res;

    res = scanf("%d%d%d",&a,&b,&c);
    printf("res = %d\n", res);
    res = scanf("%d",&a);
    printf("res = %d\n", res);

    return 0;
}

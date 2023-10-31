#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int ar[3];

    ar[0] = 10;
    ar[1] = 20;
    ar[2] = ar[0]+ar[1];

    printf("sum is = %d\n",ar[2]);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b;

    while(scanf("%d%d", &a,&b) ==2)
    {
        int andValue = a & b;
        printf("& = %d\n", andValue);
        int orValue = a | b;
        printf("| = %d\n", orValue);
        int xorValue = a^b;
        printf("^ = %d\n", xorValue);
    }
    return 0;
}

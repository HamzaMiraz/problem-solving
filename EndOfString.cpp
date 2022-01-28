#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char b[50];
    char a[50];

    b[0] ='p';
    b[1] ='e';
    b[2] ='n';

    printf("b = %s\n",b);

    b[3] = '\0';

    printf("b = %s\n",b);

    printf("NULL: %d\n", '\0');


///    a = b;   It doesn't work, it an error.
    strcpy(a, b);   ///a=b;

    printf("a = %s");



    return 0;
}

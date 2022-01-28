#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    char a, b;
    int i;
    a = -128;
    b = 127;

//    printf("%d %d\n", a, b);


    a = 'Z';
    b = 'q';

    b = 'A';
    b = 65;
    printf("b = %c\n", b);
    printf("65 = %c\n", 65);

    scanf("%c",&a);
    printf("a = %c  ASCII = %d\n",a, a);


    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int a = 10;
    int lineNo = 1;

///    ++a; ///a += 1;  ///    a= a+1;

    printf("%d#  %d\n",lineNo++, --a);
    printf("%d#  %d\n",lineNo++, a);
    printf("%d#  %d\n",lineNo++, a--);
    printf("%d#  %d\n",lineNo++, a);
    printf("%d#  %d\n",lineNo++, a++);
    printf("%d#  %d\n",lineNo++, a);
    printf("%d#  %d\n",lineNo++, ++a);
    printf("%d#  %d\n",lineNo++, a);




    return 0;
}

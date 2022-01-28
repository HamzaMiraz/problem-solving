#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char b[50];

    while(gets(b))      ///scanf("%[^\n]",b)
    {
        puts(b);

        int len = 0;
        for(int i=0; b[i] ;i ++)
        {
            printf("%c -> %d\n",b[i], b[i]);
            len ++;
        }

        printf("\nLen = %d\n",len);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char b[50];

    while(scanf("%[^\n]",b)==1)
    {
        int len = strlen(b);

        printf("Name: %s \t\t Len = %d\n",b, len);

        for(int i = 0;i<len;i++)
        {
            char ch = b[i];
            printf("%c -> %d\n", ch, ch);
        }
    }

    return 0;
}

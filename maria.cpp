
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char str[100];
    while(scanf("%s",str) ==1)
    {
        int i,j;
        int len =strlen(str);
        for(i=0; i<len ; i++)
        {
            if('A'<= str[i] && str[i]<='Z')
            {
                printf("%c",str[i]);
            }

        }
        puts("\n");
        for(i=0;i<len;i++)
        {
            if('a'<=str[i] && str[i]<='z')
            {
                printf("%c",str[i]);
            }


        }

    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char a[] = "Hamza";
//    a[] = "abc";
//    a = "abc";
    printf("Name: %s\n",a); //To print Char Array, Which is called String.

    char b[50];

    while(scanf("%s",b)==1)  /// Ampersand  is not required for string.
    {
        int len = strlen(b);

        printf("Name: %s \t\t Len = %d\n",b,len);

        for(int i = 0;i<len;i++)
        {
            char ch = b[i];
            printf("%c -> %d\n", ch, ch);
        }
//        break;
    }

    return 0;
}

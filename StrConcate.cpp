#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void conCat(char a[], char b[])
{
    int la = strlen(a);
    int lb = strlen(b);

    for(int i=0;i<=lb;i++)
    {
        a[la+i] = b[i];
    }
}

char a[1100000], b[1100000];

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    while(scanf("%s%s",a,b) == 2)
    {
        conCat(a,b);
        printf("Concatanated Str: %s\n",a);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int len, c=0;
    char x[1000];

    scanf("%[^\n]",x);
    len = strlen(x);

    for(int i=len-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char x;

    scanf("%c",&x);
    /// upper case to lower case
        if('A'<=x && x<='Z')
        {
            x = x - 'A' + 'a';
        }
    /// lower case to upper case
        else if('a'<=x && x<='z')
        {
            x = x - 'a' + 'A';
        }

    printf("%c",x);

    return 0;
}

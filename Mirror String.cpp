#include <stdio.h>
#include <string.h>

int main ()
{
    int length;
    char x[1000];

    scanf("%[^\n]",x);

    length = strlen(x);
    for(int i=0;i<length;i++)
    {
        if('a'<=x[i] && x[i]<='z')
        {
            x[i] = x[i] - 'a' + 'A';
        }
        else if('A'<=x[i] && x[i]<='Z')
        {
            x[i] = x[i] - 'A' + 'a';
        }
    }
    printf("\n%s",x);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int length;
    char x[50];
    //scanf("%s",x);//it takes only a single word
    //scanf("%[^\n]",x);//when input enter then stop taking input
    //scanf("%[^k]",x);//scanf("%[^x]",x)when input x then stop taking input
    //gets(x);
    fgets(x,50,stdin);///fgets(x,string size,stdin),fgets takes newline when you press enter

    length = strlen(x);
    printf("%d",length);
    for(int i=0;i<length;i++)
    {
        if('a'<=x[i] && x[i]<='z')
        {
            x[i] = x[i] - 'a' + 'A';
        }
    }
    printf("%s",x);

    return 0;
}

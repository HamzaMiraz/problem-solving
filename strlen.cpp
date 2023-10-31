#include<stdio.h>

int main ()
{
    char x[50];
    x[0] = 't';
    x[1] = 'h';
    x[2] = 'i';
    x[3] = 's';
    x[4] = '\0';
    int k='A';
    int len;
    //len = strlen(x);

    for(len=0;x[len] !='\0';len++)
    {
        printf("%c",x[len]);
    }
    printf("\nlength = %d",len);

    return 0;
}


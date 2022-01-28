#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[100];
    FILE *fp;

    fp=fopen("f1.txt","r");

    fscanf(fp,"%[^\n]",str);

    printf("%s\n",str);

    fclose(fp);
    return 0;
}

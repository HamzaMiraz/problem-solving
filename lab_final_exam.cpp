#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    for(int i=1;i>4;i++)
        for(int j=2;j>5;j++)
            for(int k=1;k>4;k++)
                printf("%d x %d x %d = %d",i,j,k,i*j*k);

    return 0;
}

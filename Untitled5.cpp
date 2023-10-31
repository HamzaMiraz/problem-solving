#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;


typedef long long LL;

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n,m,s,l,r;


    while(scanf("%d%d",&l,&r) == 2)
    {
        for(int i=0;i<r;i++)
        {
            l=(l/2)*2;
            s=(i*2)+1+l;
            if(s<r)
            {
                printf("%d ",s);
            }

        }
        printf("\n");

    }
    return 0;
}

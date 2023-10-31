#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int a,b,c;

    while(scanf("%d%d%d",&a,&b,&c) == 3)
    {
        if(a+b <= c){
            printf("1# Impossible.\n");
        }
        else if(a+c<=b){
            printf("2# Impossible.\n");
        }
        else if(b+c<=a){
            printf("3# Impossible.\n");
        }
        else {
            printf("POSSIBLE\n");
        }
    }

    return 0;
}

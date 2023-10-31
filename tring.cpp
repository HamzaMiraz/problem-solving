#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b,c,s,Aria;

    while(scanf("%d%d%d",&a,&b,&c) ==3 )
    s=(a+b+c)/2;
    Aria = sqrt*(s*(s-a)*(s-b)*(s-c));
    if (a+b>c,b+c>a,c+a>b){
    printf( "Tringle possible Aria = %d\n",Aria);
    }
    else {
    printf(" Tringle Imposible");
    }
    }
    return 0;
}

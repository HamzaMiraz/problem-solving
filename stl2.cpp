#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    int x1 ,y1 ,x2 ,y2,a ,b ,c;
    char sign='+';

    while( scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
    {
        a=sign*(y1-y2);
        b=-sign*(x1-x2);
        c=sign*(y1*(x1-x2)-x1*(y1-y2));


        printf("%dx  %dy  %d =0\n",a,b,c);

    }

    return 0;
}

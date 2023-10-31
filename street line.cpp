#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    int x1 ,y1 ,x2 ,y2,a ,b ,c;

    while( scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
    {
        a=(y1-y2);
        b=-(x1-x2);
        c=y1*(x1-x2)-x1*(y1-y2);

        if(c<0 && b>0){
            printf("%dx + %dy - %d = 0\n",a,b,-c);}
        else if(b<0 && c>0){
            printf("%dx - %dy + %d = 0\n",a,-b,c);}
        else if (b<0 && c<0){
            printf("%dx - %dy - %d = 0\n",a,-b,-c);}
        else {
            printf("%dx + %dy + %d = 0\n",a,b,c);
        }
    }

    return 0;
}

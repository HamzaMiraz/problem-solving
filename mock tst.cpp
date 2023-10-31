#include<stdio.h>

int main()
{

//freopen("0.in", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int t,X,Y,x,y,a,b,j,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&X,&Y);
        scanf("%d%d",&x,&y);
        scanf("%d%d",&a,&b);
        scanf("%d%d",&j,&k);
        if(Y!=y)
        {
            if(X=x && a>x && j>x)printf("Win\n");
            if(X=x && a>x && j<x)printf("Lose\n");
            if(X=x && a<x && j<x)printf("Win\n");
            if(X=x && a<x && j>x)printf("Lose\n");


        }

        else if(X!=x)
        {
            if(Y=y && b>y && k>y)printf("Win\n");
            if(Y=y && b>y && k<y)printf("Lose\n");
            if(Y=y && b<y && k<y)printf("Win\n");
            if(Y=y && b<y && k>y)printf("Lose\n");

        }

    }
    return 0;

}

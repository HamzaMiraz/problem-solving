#include <stdio.h>


int main()
{
    int x,y,i,s;
    scanf("%d%d",&x,&y);
    printf("multiple tabile from %d to %d\n\n",x,y);
    for(;x<=y;x++)
    {
        for(i=1;i<=10;i++)
        {
            s=i*x;
            printf("%d x %d = %d\n",x,i,s);

        }
        puts("\n");
    }

    return 0;
}

///input:5  10


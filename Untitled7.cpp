/// problem 1
#include <stdio.h>

using namespace std;

int max2(int y, int x)
{
    int m;

    if(y>x)m=y;

    else m=x;

    return m;

}

int main()
{

    int x,y,m;
    while(scanf("%d%d",&x,&y) ==2)
    {
        printf("X=%d, Y=%d\n",x,y);

        int m=max2(x,y);

        printf("The maximum value is %d\n",m);


    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
int fun(int a, int b)
{
    int x,y,k,r,i;
    int c=k=0;

    while(a!=0 || b!=0)
    {
        x=a%10;
        y=b%10;


        r=x+y+k;
        if(r>9)
        {
            c++,k=1;
        }
        if(r<=9)
        {
            k=0;
        }
        a=a/10;
        b=b/10;

    }
    return c;
}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b;
    while(scanf("%d%d",&a,&b) ==2)
    {
        if(a==0 && b==0)
        {
            break ;
        }
        else
        {
         int c=fun(a,b);


            if(c==0)
            {
                printf("No carry operation.");
            }
            else
            {
                printf("%d carry operations.",c);
            }

        }
    }
    return 0;
}

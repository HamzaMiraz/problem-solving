#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
int rec(int a, int b)
{
    int sum =0;

    if(a==b)

    return a ;

    else

    return a+rec((a+1),b);

}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int a,b ;
    while(scanf("%d%d",&a,&b) == 2)
    {
        int sum = rec(a,b);
        printf("%d\n",sum);
    }
    return 0;
}

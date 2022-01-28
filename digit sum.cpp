#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;
int rec(int n)
{

    if(n==0)

    return 0 ;

    else

    return n%10+rec(n/10);

}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n ;
    while(scanf("%d",&n) == 1)
    {
        int sum = rec(n);
        printf("%d\n",sum);
    }
    return 0;
}

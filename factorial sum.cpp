#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

int pla(int n)
{
    int m;
    if(n==1)

    return 1;

    else
    m=n*pla(n-1);

    return m;

}


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    int n;
    while(scanf("%d",&n) == 1)
    {
        int sum= pla(n);
        printf("%d\n",sum);
    }
    return 0;
}


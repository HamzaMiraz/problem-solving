#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<#a<<" -> "<<a<<endl;
void fun(int i,int j){

    if(i==0)return ;
    if(j==0)return ;

    cout<<__LINE__<<"  "<<i<<" "<<j<<endl;fun(i-1,j);

    cout<<__LINE__<<"  "<<i<<" "<<j<<endl;fun(i,j-1);

    cout<<__LINE__<<" sum= "<<i+j<<endl;
}
int main()
{
    int n,m;
    cin>>n;
    m=n;
    fun(n,m);

    return 0;
}

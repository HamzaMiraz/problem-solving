#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

typedef long long LL;

void B();
void A();


int main()
{
    A();
    return 0;
}

void A()
{
    puts("A");
    B();
}
void B()
{
    puts("B");
//    A();
}

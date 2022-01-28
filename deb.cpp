#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

#define PI 3.1416


void test(){
    double pi = PI;

    printf("%lf %d : %s\n",pi, __LINE__, __FUNCTION__);
}

int main()
{
    double pi = PI;

    printf("%lf %d : %s\n",pi, __LINE__, __FUNCTION__);

//    test();

    cout<<__LINE__<<"# "<<" -> "<<pi<<endl;

    int mariaHamza = -55;

    deb(mariaHamza);

    int hamza =12;
    deb(hamza);


    return 0;
}

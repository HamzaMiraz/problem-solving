#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

double getArea(double radious, double &perimeter)
{
    double pi = acos(-1);

    double  area = pow(radious, 2) * pi;

    printf("In Function # Area: %lf  Peri:%lf\n",area, perimeter);

    perimeter = 2 * pi * radious;

    printf("In Function # Area: %lf  Peri:%lf\n",area, perimeter);

    return area;
}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    double radious = 10.0;
    double area = -1;
    double perimeter = -1;

    area = getArea(radious, perimeter);

    printf("\n\nArea: %lf  Peri:%lf\n",area, perimeter);


    return 0;
}

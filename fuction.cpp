#include<stdio.h>

double add(double a, double b)
{
    double  sum =a+b;
    return sum;
}

int main()
{o
    double i,j;
    scanf("%lf%lf",&i,&j);

    double  s=add(i,j);
    printf("%lf",s);
}

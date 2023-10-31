#include<stdio.h>
int main()
{
    double a,b;

    scanf("%lf%lf",&a,&b);

    printf("%.0lf %.0lf %.3lf\n",a,b,a/b);

    if(a+b==60);{
        printf("yes\n");

    }
    else{
        printf("no\n");

    }
    return 0;

}




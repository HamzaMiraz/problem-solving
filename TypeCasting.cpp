#include <stdio.h>

int main()
{
    int a, b;
    double avg;

    scanf("%d%d",&a,&b);

///    avg = (a+b)/2;

    ///avg = (a+b)/2.0;
    avg = ((double)a+b)/2; ///(a+(double)b)/2;  (a+b)/(double)2;

    printf("Average: %lf\n", avg);

    return 0;
}

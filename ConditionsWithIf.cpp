#include <stdio.h>

int main()
{
    int a, b;
    double avg;

    scanf("%d%d",&a,&b);
/**
    True = Non Zero.
    False = 0

    if(a < b)
    if(a <= b)
    if(a > b)
    if(a >= b)
    if(a == b)
    if(a != b)
*/

    if(a < b){
        printf("1#\t%d < %d\n", a, b);
    }

    if(a <= b){
        printf("2#\t%d <= %d\n", a, b);
    }

    if(a > b){printf("3#\t%d > %d\n", a, b);}
    if(a >= b){printf("4#\t%d >= %d\n", a, b);}
    if(a == b){printf("5#\t%d == %d\n", a, b);}
    if(a != b){printf("6#\t%d != %d\n", a, b);}


    return 0;
}

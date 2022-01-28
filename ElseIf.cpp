#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d%d",&a,&b);

    if(a > b)
        puts("A is greater then B.");
    else if(a < b){
        puts("A is less then B.");
    }
    else {
        puts("A is equal to B.");
        if(a%2==1){
            puts("A is a Odd Number.");
        }
        else {
            puts("A is an Even Number.");
        }
    }


    return 0;
}

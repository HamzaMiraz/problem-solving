#include <stdio.h>

int main()
{
    int a, b;
    double avg;

    scanf("%d%d",&a,&b);

    /// % always work with integer number.
    printf("Modulus = %d  Result = %d\n", a%b, a/b);

    return 0;
}

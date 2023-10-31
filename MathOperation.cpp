#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x, y, z, p, q, r;

    scanf("%lf%lf",&x,&y);

    double sqrtX = sqrt(x);
    double sqrtY = sqrt(y);

    printf("Sqrt(%.1lf) = %lf Sqrt(%.1lf) = %lf\n",x, sqrtX, y, sqrtY);

    p = pow(x, y);

    printf("pow(%lf, %lf) = %lf\n",x, y, p);


    double PI = acos(-1); /// 2 * acos(0)

    printf("PI = %.10lf\n",PI);

    ///Works only in Radian unit not Degree for angles.
    printf("sin(PI/2) = %lf\n",sin(PI/2));
    printf("cos(PI/2) = %lf\n",cos(PI/2));


    return 0;
}

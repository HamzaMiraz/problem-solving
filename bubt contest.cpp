#include<stdio.h>

int main()
{
    long long n,a,b,m,F,f;

    scanf("%lld%lld%lld",&a,&b,&m);
    if(a!=b)
    {
        if(a>b)
        {
            for(f;f>F;f++)
            {
                if(((a-m)/F)==((b-m)/f))
                {
                    n=(a-m)/F;
                }
            }
        }

        if(a<b)
        {
            for(F;F<f;F++)
            {
                if(((a-m)/F)==((b-m)/f))
                {
                    n=(a-m)/F;
                }
            }
        }
        printf("%lld",n);
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, m, n, o;
    for(i = 0; i <= 100000; i++)
    {
        m = i;
        printf("%d = ",m);
        for(j = 30; j >= 0; j--)
        {
            o = pow(2, j);
            if(m >= o)
            {
                printf("1");
                m = m - o;
            }
            else if(m < o)
            {
                printf("0");
            }
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    while(scanf("%d",&n) ==1)
    {
        for(int i=0;i<n;i++)
        {
            printf("*");
//            printf("%d",i);

        }
        printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }


    }
    return 0;
}

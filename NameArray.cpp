#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    char name[100][30];

    while(scanf("%d",&n) ==1)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%s",name[i]);
        }

        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int len = strlen(name[i]);
            sum += len;
            char ch = name[i][0];

            if(ch =='a' || ch =='A')
                printf("%s -> %d\n",name[i], len);
        }

        printf("LengthSum = %d\n",sum);
    }
    return 0;
}

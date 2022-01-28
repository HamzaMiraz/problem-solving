#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.

    char str[100];
    char up[100];
    char low[100];
    char dig[100];

    while(scanf("%s",str) ==1)
    {
        int i,j,u,l,n,k;
        int len =strlen(str);
        for(i=0,j=0;i<len;i++)
        {
            if('A'<= str[i] && str[i]<='Z')
            {
                up[j]=str[i];
                j++;
            }

        }

        for(i=0,k=0;i<len;i++)
        {
            if('a'<=str[i] && str[i]<='z')
            {
                low[k]=str[i];
                k++;
            }

        }
        for(i=0,l=0;i<len;i++)
        {
            if('0'<=str[i] && str[i]<='9')
            {
                dig[l]=str[i];
                l++;
            }

        }
        up[j]=0;
        low[k]=0;
        dig[l]=0;

        printf("Upper: [%s]\n",up);
        printf("Lower: [%s]\n",low);
        printf("Digit: [%s]\n",dig);
    }
    return 0;
}

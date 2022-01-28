#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>

int i,j,n,m,k,p,z;
int a[10][10];
int b[10][10];
int s[10][10];
int sum[10][10];

void matrix(int s[10][10],int b[10][10],int q)
{
    if(q=p)
    {
        printf("Matrix ANS:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",s[i][j]);
            }
            printf("\n");
        }
        return ;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            z=0;
            for(k=0;k<n;k++)
            {
                z=z+s[i][k]*b[k][j];
            }
            s[i][j]=z;

        }
    }
    matrix(s,a,q+1);

}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.


    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    printf("Enter the power of the matrix:");
    scanf("%d",&p);
    printf("Enter the matrix:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        if(p==1)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%5d",a[i][j]);
                }
                printf("\n");

            }
        }
        else if(p>1)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    m=0;
                    for(k=0;k<n;k++)
                    {
                        m=m+a[i][k]*a[k][j];
                    }
                    sum[i][j]=m;

                }
            }
            if(p == 2){
                printf("Matrix ANS:\n");
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%5d",sum[i][j]);
                    }
                    printf("\n");
                }

            }
            if(p > 2){
                matrix(sum,a,2);
            }
        }

    return 0;
}

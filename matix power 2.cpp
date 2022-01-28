#include <stdio.h>

int i,j,n,k,p,z;
int a[10][10];
int b[10][10];
int s[10][10];
int sum[10][10];

void matrix(int s[10][10],int q)
{
    if(q==p){
        for(i=0; i<n; i++){
            for(j=0; j<n; j++)
                printf("%5d",s[i][j]);
            printf("\n");
        }
        return ;
    }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++){
            z=0;
            for(k=0; k<n; k++)
                z=z+(s[i][k]*a[k][j]);
            b[i][j]=z;
        }
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                s[i][j]=b[i][j];
    matrix(s,q+1);

}

int main()
{
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    printf("Enter the power of the matrix:");
    scanf("%d",&p);
    printf("Enter the matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]),sum[i][j] = a[i][j];

    matrix(sum,1);

    return 0;
}


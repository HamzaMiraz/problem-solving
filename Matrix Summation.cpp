#include <stdio.h>

int main()
{
    int i,j,p,q;
    int a[10][10];
    int b[10][10];
    int sum[10][10];

    printf("Enter the row, column of the matrices: ");
    scanf("%d%d",&p,&q);
    printf("\nEnter the first matrix:\n");
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                scanf("%d",&a[i][j]);

        printf("\nEnter the second matrix:\n");
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                scanf("%d",&b[i][j]);

        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                sum[i][j]=a[i][j]+b[i][j];

        puts("\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++)
                printf("%d   ",sum[i][j]);
            printf("\n");
        }
    return 0;
}


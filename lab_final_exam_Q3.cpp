#include <stdio.h>
#include <math.h>


int main ()
{
    int a[50],b[50],n,s1=0,s2=0;
    printf("Total overs:");
    scanf("%d",&n);
    printf("Runs by Arif:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s1+=a[i];
    }
    printf("Runs by Miraj:");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        s2+=b[i];
    }
    printf("-----\n");
    if(s1>s2)printf("Arif won");
    else printf("Miraj won");

    return 0;
}

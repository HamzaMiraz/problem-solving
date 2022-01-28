/// problem 2
#include <stdio.h>


int main(){


    int n,m,s,i;
    scanf("%d%d",&n,&m);
    s=n*m;

    for(i=n+1;i<m;i++)s*=i;
    printf("%d",s);

    return 0;
}

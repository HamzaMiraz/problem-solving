#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int *ar;
    int n=10;
    ar=(int*)malloc(n * sizeof(int));
    if(ar!=NULL){
        for(int i=0;i<n;i++)
            scanf("%d",&ar[i]);

        printf("Initial allocated memory address:\n");
        for(int i=0; i<n;i++)
            printf("%X\n",&ar[i]);

        ar=(int*)realloc(ar,3 * sizeof(int));

        for(int i=n;i<n+3;i++)
            scanf("%d",&ar[i]);

        printf("Re-allocated memory address:\n");
        for(int i=0; i<n+3;i++)
            printf("%X\n",&ar[i]);
    }
    free(ar);
    return 0;
}

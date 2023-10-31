#include<stdio.h>
long long ncr(int n, int r){

    int res = 1;

    for (int i=0; i<r; i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}

int main(){
    int n, r;
    scanf("%d", &n);
    scanf("%d", &r);
    int result = ncr(n,r);
    printf("Result of C(%d, %d) = %d", n, r, result);

    return 0;
}

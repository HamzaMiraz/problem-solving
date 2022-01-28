#include <stdio.h>

void rev(int n)
{
    int reversed = 0;
    while(n)
    {
        reversed *= 10;
        reversed += n%10;
        n /= 10;
    }
    printf("Reverse = %d\n", reversed);
}
int main()
{
        int x;
        scanf("%d", &x);
        rev(x);

    return 0;
}

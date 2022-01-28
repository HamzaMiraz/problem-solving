#include <stdio.h>

int rev(int n)
{
    int reversed = 0;
    while(n>0)
    {
        reversed *= 10;
        reversed += n%10;
        n /= 10;
    }
    return reversed ;
}
int main()
{
        int x;
        scanf("%d", &x);
        x = rev(x);
        printf("%d",x);

    return 0;
}


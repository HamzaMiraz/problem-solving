#include<iostream>

using namespace std;

int reversed;

int rev(int n)
{
    reversed = 0;
    while(n>0)
    {
        reversed *= 10;
        reversed += n%10;
        cout<<n%10<<" ";
        n /= 10;

    }
    return reversed ;
}
int main()
{
        int x;
        scanf("%d", &x);

        x = rev(x);
        cout<<"or ";
        x = rev(reversed);

    return 0;
}

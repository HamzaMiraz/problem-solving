#include<bits/stdc++.h>

void f(int x)
{
    if(x==0)return;

    x--;

    printf("%d\n",x);

    f(x);

    printf("%d\n",x);

}
int main(){

    f(3);

    return 0;
}

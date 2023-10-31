#include <bits/stdc++.h>
using namespace std;

void fun(int n){

    if(n==0)return;
    --n;
    cout<<n<<endl;
    fun(n);
    cout<<n<<endl;
}
int main()
{
//    freopen("dp1.in","r",stdin);
//    freopen("out.txt","w",stdout);

    int n;
    while(cin>>n)
    {
        fun(n);
    }
    return 0;
}



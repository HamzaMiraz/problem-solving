#include "bits/stdc++.h"
using namespace std;
using ll=long long;
int main()
{
    ll n;
    while(cin>>n){
        ll x=sqrtl(n);
        while(x*x<n)++x;
        while(x*x>n)--x;
        cout<<x<<"\n";
    }

    return 0;
}

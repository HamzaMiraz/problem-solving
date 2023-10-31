#include<bits/stdc++.h>
using namespace std;

void fun(int x){

    if(x>1) fun(x/2);

    cout<<x%2;
}
int main()
{
    int x;
    while(cin>>x){
        fun(x);
        cout<<endl;
    }
    return 0;
}


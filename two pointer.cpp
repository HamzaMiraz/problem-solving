#include<bits/stdc++.h>

using namespace std;

int ar[1000];
int main()
{
//   freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
//    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,x;
    while(cin>>n>>x)
    {
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        int flag=0;
        int i=0,j=n-1;
        while(i<j){
            if(ar[i]+ar[j]==x){
                flag=1;
                break;
            }
            if(ar[i]+ar[j]>x)j--;
            else i++;
        }
        if(flag==1){
            cout<<"found "<<ar[i]<<"+"<<ar[j]<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

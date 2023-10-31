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
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
            while(l<r){
                if(ar[i]+ar[l]+ar[r]==x){
                   cout<<ar[i]<<" "<<ar[l]<<" "<<ar[r]<<endl;
                }
                if(ar[i]+ar[l]+ar[r]>x)r--;
                else l++;
            }
        }

    }
    return 0;
}

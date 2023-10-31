#include<bits/stdc++.h>

using namespace std;

int ar[1000];
int br[1000];
int main()
{
//   freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
//    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,x,m;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<m;i++)cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+m);
        int x;cin>>x;
        int i=0,j=m-1,idx1,idx2,sum;
        int dif=9999;
        while(i<n && j>=0){
            sum=ar[i]+br[j];
            if(abs(x-sum)<dif){
                dif=abs(x-sum);
                idx1=i,idx2=j;
            }
            if(sum>x)j--;
            else i++;
        }
        cout<<ar[idx1]<<"+"<<br[idx2]<<" closest to "<<x<<endl;
    }
    return 0;
}

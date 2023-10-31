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
        int i=0,j=n-1,idx1,idx2;
        int sum=0;
        int dif=9999;
        while(i<j){
            sum=ar[i]+ar[j];
            if(abs(x-sum)<dif){
                dif=abs(x-sum);
                idx1=i,idx2=j;
            }
            if(sum>x)j--;
            else i++;
        }
        cout<<ar[idx1]<<"+"<<ar[idx2]<<" closest to "<<x<<endl;
    }
    return 0;
}

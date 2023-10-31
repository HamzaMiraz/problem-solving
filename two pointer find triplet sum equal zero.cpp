#include<bits/stdc++.h>

using namespace std;

int ar[1000];
int main()
{
//   freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
//    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,x;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        for(int i=0;i<n;i++){
            unordered_set<int>st;
            for(int j=i+1;j<n;j++){
                x=-(ar[i]+ar[j]);
                if(st.find(x)!=st.end()){
                    cout<<x<<" "<<ar[i]<<" "<<ar[j]<<endl;
                }
                else{
                    st.insert(ar[j]);
                }
            }
        }

    }
    return 0;
}

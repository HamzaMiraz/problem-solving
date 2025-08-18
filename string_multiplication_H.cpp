#include<bits/stdc++.h>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T>using iset=tree<T,null_type,less_equal<T>,///descending_order=greater<T>,multi_iset=less_equal<T>
rb_tree_tag,tree_order_statistics_node_update> ;///exmp= iset<double>st
///who is k'th position= *(set.find_by_order(k)),index of v = set.order_of_key(v);

typedef long long ll;/// 1e18;
//typedef __int128_t LL;/// 1e32;
template <typename T>
T BIGMOD(T base,T power,T Mod=1e9+7){T ans = 1;
while(power){if(power & 1)ans = (ans * base) % Mod;
base = (base * base) % Mod;power = power >> 1;}return ans;}

template <typename T>
T INV(T base,T mod=1e9+7){//defult mod=1e9+7
    return BIGMOD(base%mod,mod-2,mod)%mod;///base^-1
}

template <typename T>
T nCr(T n, T r){T res=1;for (T i=0;i<r;i++){
res *= (n-i);res /= (i+1);}return res;}/// NCR

template <typename T>
T fact(T n){if(n<=1)return 1;return n*fact(n-1);}

template <typename T>
T nPr(T n, T r){return fact(n)/fact(n-r);}///NPR


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
#define all(x) x.begin(), x.end()
#define loop(IV,INIT,NV) for(int IV=INIT;IV<=NV;IV++)
#define lbv(vec,x) lower_bound(all(vec),x)-vec.begin()//retrun index
#define ubv(vec,x) upper_bound(all(vec),x)-vec.begin()
#define lba(ar,n,x) lower_bound(ar,ar+n,x)-&ar[0];//return index
#define uba(ar,n,x) upper_bound(ar,ar+n,x)-&ar[0];
#define lb(mp,x) mp.lower_bound(x);///for set,map
#define ub(st,x) st.upper_bound(x);///return pointer address
#define GCD(a,b)  __gcd(a,b)
#define LCM(a,b)  (a*b)/__gcd(a,b)
#define sqr(a)    ((a)*(a))
#define deg(n)  n*PI/180 /// redian to degree
#define sp(n,d)  fixed << setprecision(d) <<n
#define pb emplace_back
#define F  first
#define S  second
#define ss " "
#define nn printf("\n");
#define el cout<<"\n";
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";

template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 1e9+10;
const ll MOD = 1e9 +7;// Prime

string sum(string &cur,string &prev){
    if(prev=="")return cur;
    string ans="";
    int i=0,j=0;
    int cr=0;
    while(i<cur.size()&& j<prev.size()){
        int a=cur[i]-'0';
        int b=prev[j]-'0';
        int m=a+b +cr;
        cr=m/10;
        int cur=m%10;
        ans+=(cur+'0');
        i++,j++;
    }
    while(i<cur.size()){
        int a=cur[i]-'0';
        int m=a+cr;
        int cur=m%10;
        cr=m/10;
        ans+=(cur+'0');
        i++;
    } 
    while(j<prev.size()){
        int a=prev[j]-'0';
        int m=a+cr;
        int prev=m%10;
        cr=m/10;
        ans+=(prev+'0');
        j++;
    }
    if(cr){
        ans+=(cr+'0');
    }
    return ans;
}

string Mul(string &s1,string &s2){
    if(s1.size()<s2.size()){
        swap(s1,s2);
    }
    int cr=0;
    string curline="";
    string prev="";
    for(int i=s2.size()-1,z=0;i>=0;i--,z++){
        curline="";
        cr=0;
        for(int zeros=1;zeros<=z;zeros++){
            curline+='0';
        }

        for(int j=s1.size()-1;j>=0;j--){
            int a=s1[j]-'0',b=s2[i]-'0';
            int m=a*b +cr;
            int cur=m%10;
            cr=m/10;
            curline+=(cur+'0');
        }
        if(cr){
            curline+=(cr+'0');
        }
        curline=sum(curline,prev);
        prev=curline;
    }
    while(prev.size()>1 && prev.back()=='0'){/// removing front zeros if exist;
        prev.pop_back();
    }
    reverse(prev.begin(),prev.end());
    return prev;
}

void solve(){

    string s1,s2;
    cin>>s1>>s2;

    cout<<Mul(s1,s2)<<"\n";

}

signed main()
{
#ifndef ONLINE_JUDGE
     freopen("inputf.in", "r", stdin);  ///To read from a file.
//    freopen("outputf.in", "w", stdout);  ///To write  a file.
#endif
    cin.tie(nullptr)->sync_with_stdio(false);
    ll tks=1;
    //cin>>tks;
    for(int ks=1;ks<=tks;ks++){
        //cout<<"Case "<<ks<<": ";
        solve();
    }
    //cerr<<"\nTime:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}
///invisible =  
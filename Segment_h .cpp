#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

//For Debugging
#define debug(a...)          {cout<<" #--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;


#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;
typedef long long LL;
const double PI = acos(-1);
const double EPS = 1e-7; ///1*10^-7
const int oo = 1e8+0.5;
int ar[1000];
int tree[4*1000];

void init(int node,int st,int fin){
    if(st==fin){
        tree[node]=ar[st];
    }
    return;

    int left=node*2;
    int right=node*2+1;
    int mid=(st+fin)/2;
    init(left,st,mid);
    init(right,mid+1,fin);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int st,int fin,int i,int j){

    if(st>j || fin<i)return 0;
    if(st>=i && fin<=j)return tree[node];

    int left=node*2;
    int right=node*2+1;
    int mid=(st+fin)/2;
    int a = query(left,st,mid,i,j);
    int b = query(right,mid+1,fin,i,j);
    return a + b;

}
void update(int node,int st,int fin,int index,int newvalue){

    if(st>index || fin<index)return;
    if(st>=index && fin<=index)
        tree[node]=newvalue;
    return;

    int left=node*2;
    int right=node*2+1;
    int mid=(st+fin)/2;
    update(left,st,mid,index,newvalue);
    update(right,mid+1,fin,index,newvalue);
    tree[node]=tree[left]+tree[right];

}

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.
    int n;
    while(scanf("%d",&n) ==1)
    {
        int i,j,index,new_value;
        for(int i=1;i<=n;i++)
            cin>>ar[i];

        init(1,1,n);
        cin>>i>>j;
        cout<<query(1,1,n,i,j)<<endl;
        cout<<"enter ur updateable index and new value"<<endl;
        update(1,1,n,index,new_value);
        cout<<query(1,1,n,i,j)<<endl;



    }
    return 0;
}

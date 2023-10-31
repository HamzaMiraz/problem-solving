#include<iostream>

using namespace std;

int main(){

    int ar[100],n,m,cnt=0,flag=1;

    cin>>n;
    m=n;
    while(m){
        m/=10;
        ++cnt;
    }
    for(int i=0;i<=cnt-1;i++){
        ar[i]=n%10;
        n/=10;
    }
    for(int i=0;i<cnt;++i){
        if(ar[i]!=ar[cnt-i-1]){
            flag=0;
            break;
        }
    }
    if(flag)///flag=1
        cout<<"palindrom"<<endl;
    else
        cout<<"not palindrom"<<endl;

    return 0;
}

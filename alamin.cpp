#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;///
    int row,col;

    cout<<"Enter the N=";
    cin>>n;

    for(row=1;row<=n;row++) {

        for(col=1;col<=row;col++){
            char ch=col+64;
            cout<<ch;
            ///printf("%c",col+64);
        }
        cout<<endl;
    }

}

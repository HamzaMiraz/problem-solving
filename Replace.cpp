#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,str;
    cin>>s;

    cout<<s<<endl;

    char ch;cin>>ch;

    replace(s.begin(),s.end(),ch,'@');///replce all ch character with @
    cout<<s<<endl;


    return 0;
}

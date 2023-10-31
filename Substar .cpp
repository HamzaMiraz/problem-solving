#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s = "Hamza";
     string c="";
     for(int i=0;i<s.size();i++){
        c+=s.substr(i,1);
        cout<<c<<"\n";
     }

    return 0;
}

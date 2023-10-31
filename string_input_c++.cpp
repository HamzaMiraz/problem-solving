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

int main ()
{
    int length;
    string x;
    getline(cin,x);

    length = x.length();///x.size()
    for(int i=0;i<length;i++)
    {
        if('a'<=x[i] && x[i]<='z')
        {
            x[i] = x[i] - 'a' + 'A';
        }
    }

    cout<<x<<endl;

    cout<<"enter 3 name:"<<endl;


    string arr[100];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<arr[i].size();j++)
        {
            if('a'<=arr[i][j] && arr[i][j]<='z')
                {
                    arr[i][j] = arr[i][j]-'a'+'A';
                }
        }
    }
    cout<<"lower to Upper"<<endl;
        for(int i=0;i<3;i++){
            cout<<arr[i]<<endl;
    }

    cout<<"add ...ABC on first name:"<<endl;
    arr[0]+="...ABC";
    cout<<arr[0]<<endl;
    return 0;
}

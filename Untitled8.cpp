#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
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

// const LL MD = 1000000009;
//const ll MD = 1000000007;


void printVector(vector<int>v, string s="")
{
    cout<<s<<" # Size: "<<v.size()<<" => {";

    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    for(int i=0;i<v.size();i++) printf("%d, ",v[i]);    //

    cout<<"}"<<endl;
}

vector<int> fun(int n)
{
    vector<int>v;

    for(int i=0;i<n;i++)
        v.push_back(i);

    return v;
}

void funInt(int x){x = 1000;}
void funIntReference(int& x){x = 1000;}

void init(vector<int>v) //Vector is Passed by value unlike array.
{
    int n = 5;
    for(int i=0;i<n;i++)
        v.push_back(i);
}

void initReference(vector<int>&v) //Vector is Passed by value unlike array.
{
    int n = 5;
    for(int i=0;i<n;i++)
        v.push_back(i);
}

int main()
{

    vector<int>res = fun(10);
    printVector(res, "res");

    res.clear();

    init(res);
    printVector(res, "Pass By Value");
    initReference(res);
    printVector(res, "Pass By Reference");
    puts("++++++++++++++++++++++");
    int n = -1;
    funInt(n);
    deb(n);
    funIntReference(n);
    deb(n);

    return 0;
}


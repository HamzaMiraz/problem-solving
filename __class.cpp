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

class student
{
    public:
    int id;
    double gpa;

};

int main()
{
    student gadha;
    gadha.id=345;
    gadha.gpa=2.33;

    cout<<gadha.id<<"    "<<gadha.gpa<<endl;


    return 0;
}

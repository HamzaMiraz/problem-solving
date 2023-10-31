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


#include <thread>
#include <chrono>

void Sleep(int x){
    std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

void go(string msg)
{
    int i=0;
    while(i<10)
    {
        cout<<msg<<"# "<<i<<endl;
        i++;
        Sleep(500);
    }
}

int main()
{
    thread t1(go, "A");
    thread t2(go, "B");

    puts("Called A & B.");


    t1.join();
    t2.join();

//    t1.detach();
//    t2.detach();
//    Sleep(3000);

    puts("The End");

    return 0;
}

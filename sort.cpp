#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
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


int len;
int ar[30];
char  str[30];

int main()
{
//freopen("1.in", "r", stdin);  ///To read from a file.
//freopen("out.txt", "w", stdout);  ///To write  a file.

///  sort string
        for(int i=0;i<5;i++)
        {
            scanf("%c",&str[i]);

        }

        //len = strlen(str);
        sort(&str[0],&str[5]);///sort(str, str + 5);
        for(int i=0;i<5;i++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
/// sort string -2

        scanf("%s",str);
        len = strlen(str);
        sort(str, str + len);
        printf("%s\n",str);



/// sort array
        for(int i=0;i<5;i++)
        {
            scanf("%d",&ar[i]);

        }

        sort(ar, ar + 5);
        for(int i=0;i<5;i++)
        {
            printf("%d ",ar[i]);
        }




    return 0;
}
/*input:
kasta

aasfertfd

5 67 3 89 1
*/

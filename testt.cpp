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

int main()
{
    int l,i,j,b;
    char s[50];
    while(gets(s))
    {
        l=strlen(s);
        b=-1;
        for(i=0;i<l;i++)
        {
            if(s[i]==' ')
            {

                for(j=i-1;j>b;j--)
                {
                    printf("%c",s[j]);
                }

                printf(" ");
               b=i;

            }

        }

        for(i=l-1;i>b;i--)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

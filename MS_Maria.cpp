#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/** ---- Paknami Starts ----*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define deb(a)     cout<<__LINE__<<"# "<<#a<<" -> "<<a<<endl;

//For Debugging
#define debug(a...)          {cout<<__LINE__<<"#--> ";dbg,a; cout<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T v)
    {
        cout<<v<<" ";
        return *this;
    }
} dbg;
/** ---- Paknami Ends ----*/

typedef long long LL;
const int SZ = 100;
const double EPS = 1e-7; ///1*10^-7

char str[SZ][SZ];

int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int R, C;

void Minesweeper(int n,int m)
{
    for(int r=0;r<R;r++)
        for(int c=0;c<C;c++)
            if(str[r][c]=='.')
            {
                int cnt = 0;
                for(int i=0;i<8;i++)
                {
                    int rp = r + dr[i];
                    int cp = c + dc[i];

                    if(rp<0 || R<=rp || cp<0 || C<=cp)   continue;

                    if(str[rp][cp]=='.')    continue;

                    cnt++;
                }
                str [r][c] = '0' + cnt;
            }
}
int main()
{
    freopen("ms.in","r",stdin);
///    freopen("out.txt","w",stdout);

    int i,j,m,n;
    int tks=0;


    while(2==scanf("%d%d",&n,&m) && n && m)
    {
        if(tks)   puts("");
        R=n;
        C=m;

        printf("Field #%d:\n",++tks);
        for(i=0; i < n;i++)
        {
            scanf("%s",str[i]);
        }
        Minesweeper(n,m);
        for(i=0; i<n ;i++)
        {
            printf("%s\n",str[i]);
        }

    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;


struct node{
    int link,ch[26];
    bitset<510>out;

    void Clear()
    {
        link = 0;
        out.reset();
        memset(ch,0,sizeof ch);
    }
};

node nod[250010];
char pattern[510][510],txt[1000010];
int state;
int End[510];

queue<int>Q;

void add_string(int n)
{
    state = 0;
    nod[0].Clear();

    for(int i=0;i<n;i++)
    {
        int curr = 0;
        int len = strlen(pattern[i]);
        for(int j=0;j<len;j++)
        {
            int c = pattern[i][j]-'a';
            if(nod[curr].ch[c])
                curr = nod[curr].ch[c];
            else
            {
                nod[curr].ch[c] = ++state;
                nod[state].Clear();
                curr = state;
            }
        }
        nod[curr].out.set(i,1);
    }
}

void buildMatchingMachine()
{
    for(int i=0;i<26;i++)
    {
        if(nod[0].ch[i])
        {
            int curr = nod[0].ch[i];
            Q.push(curr);
            nod[i].link = 0;
        }
    }

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(int i=0;i<26;i++)
        {
            if(nod[u].ch[i])
            {
                int v = nod[u].ch[i];
                int failure = nod[u].link;///suffix link

                while(failure && !nod[failure].ch[i])
                    failure = nod[failure].link;
                nod[v].link = nod[failure].ch[i];
                Q.push(v);
            }
            else
            {
                int failure = nod[u].link;///suffix link
                nod[u].ch[i] = nod[failure].ch[i];
                nod[u].out |= nod[failure].out;
            }
        }
    }
}

void searchWords(int n)
{
    int len = strlen(txt);
    int curr = 0;

    for(int i=0;i<len;i++)
    {
        int c = txt[i]-'a';
        curr = nod[curr].ch[c];

        if(nod[curr].out.any())
        {
            for(int j=0;j<n;j++)
            {
                if(nod[curr].out.test(j))///chaking j'th bit on
                {
                    printf("Word %s apperas from %d to %d\n",pattern[j],i - strlen(pattern[j]) + 1,i);
                    End[j]++;
                }
            }
        }
    }
}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int i,n;
    while(1==scanf("%s",txt))
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",pattern[i]);

        memset(End,0,sizeof End);
        printf("\n");

        add_string(n);
        buildMatchingMachine();
        searchWords(n);

        printf("\n");
        for(i=0;i<n;i++)
        {
            if(End[i])
                printf("%s found\n",pattern[i]);
            else
                printf("%s not found\n",pattern[i]);
        }

        printf("\n");
        for(i=0;i<n;i++)
            printf("%s occurs %d times\n",pattern[i],End[i]);
    }

    return 0;
}
/*
hamzaamirmirazjahidbipulbipulrajuhamzahamzajahid
5
hamza miraz jahid bipul naim

*/
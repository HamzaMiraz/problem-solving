#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<map>



#define getint(a) scanf("%d", &a)
#define loop(i, n) for(int i=0; i<n; i++)

using namespace std;

map<string, string> parent;

struct DATA{
    string u, v;
    int weight;
};



bool comp(DATA a, DATA b)
{
    return a.weight > b.weight;
}



string find(string str)
{
    if(parent[str] == "")
    {
        return str;
    }
    return parent[str] = find(parent[str]);
}






int main()
{
    int number_of_cities, number_of_roads;
    string city1, city2;
    int weight;
    DATA edge;
    int minValue;
    int kaseno = 0;

    string u, v;

    vector<DATA> edgelist;

    while(true)
    {
        getint(number_of_cities);
        getint(number_of_roads);

        if(number_of_cities == 0 && number_of_roads == 0) break;

        parent.clear();
        edgelist.clear();

        loop(t, number_of_roads)
        {
            cin>>city1>>city2>>weight;
            edge.u = city1;
            edge.v = city2;
            edge.weight = weight;
            edgelist.push_back(edge);
        }

        cin>>city1>>city2;



        sort(edgelist.begin(), edgelist.end(), comp);

        minValue = 1000000;

        loop(i, number_of_roads)
        {
            u = find(edgelist[i].u);
            v = find(edgelist[i].v);
            if(u != v)
            {
                parent[u] = v;

                if(minValue > edgelist[i].weight )
                {
                    minValue = edgelist[i].weight;
                }
            }

            if(find(city1) == find(city2))
            {
                break;
            }
        }
        printf("Scenario #%d\n", ++kaseno);
        printf("%d tons\n\n", minValue);


    }
    return 0;
}

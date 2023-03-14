#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node=5;
    int edge=7;
    vector<pair<int,int>> a[node+1];
    for(int i=1; i<=edge; i++)
    {
        int u;
        int v;
        int w;
        cin>> u>> v>> w;
        a[u].push_back({v,w});
        a[v].push_back({u,w});

    }
    for(int i=1; i<=node; i++)
    {
        cout<<i<<" -> ";
        for(auto j:a[i])
        {
            cout<<'('<<j.first<<','<<j.second<<')'<<" ";
        }
         cout<<"\n";

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node=9;//max value of node;
    int edge=9;
    vector<int> adlist[node+1];// this syntax works like a 2D array.

    for(int i=1; i<=edge; i++)// this loop will continue edge time.
    {
        int u, v;
        cin>> u >> v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }
    for(int i=1; i<=node; i++)
    {cout<<i<<" -> ";
        for(auto j:adlist[i])
        {
            cout<<j<<" ";
            //j++;
        }
        cout<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int m=4;
    int admatr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            admatr[i][j]=0;

        }
    }
    for(int i=0; i<m; i++)// the loop will continue edge times
    {
        int u,v;
        cin>>u>>v;
        admatr[u][v]=1;
        admatr[v][u]=1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<admatr[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}

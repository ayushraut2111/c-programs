#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>v[],int i,int j)
{
    v[i].push_back(j);
}
bool DFS(vector<int>v[],int source,bool visited[],bool cycle[])
{
    visited[source]=true;
    cycle[source]=true;
    for(auto x: v[source])
    {
        if(visited[x]==false)
        {
            if(DFS(v,x,visited,cycle)==true)
            return true;
        }
        else if(cycle[x]==true)
        return true;
    }
    cycle[source]=false;
    return false;
}
bool DFSdis(vector<int>v[],int size)
{
    bool visited[size];
    bool cycle[size];
    for(int i=0;i<size;i++)
    {
        visited[i]=false;
        cycle[i]=false;
    }
    for(int i=0;i<size;i++)
    {
        if(visited[i]==false)
        {
            if(DFS(v,i,visited,cycle)==true)
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int>v[7];
    addedge(v,0,1);
    addedge(v,2,3);
    addedge(v,1,2);
    addedge(v,3,1);
    cout<<DFSdis(v,7);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void bfs(unordered_map<int,vector<int>>adj,int starting_point,int adge)
{
    queue<int>q;
    
    unordered_map<int,bool>visited;

    q.push(starting_point);
    for(auto i=adj.begin();i!=adj.end();i++)  //undirectional && disconnected
    {
        if(!visited[i->first])    
        {
            int front_elem =q.front();
            q.pop();
            cout<<"jatin"<<endl;
            for(auto j:adj[front_elem])
            {
                cout<<j<<" ";
                q.push(j);
            }
            ans.push_back(front_elem);
            visited[i->first]=true;
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    unordered_map<int,vector<int>>adj;
    int a,b,adge,starting_point;
    cout<<"adge=";cin>>adge;
    cout<<"starting_point=";cin>>starting_point;
    //-----adjacency list-----------
    for(int i=0;i<adge;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(adj,starting_point,adge);
    cout<<"deeshant"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
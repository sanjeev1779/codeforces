#include<stdio.h>
#include<iostream>
#include<iostream>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;
int V;
int bfs(int rGraph[V][V],int s, int t, int parent[])
{
    queue<int>que;
    que.push(s);
    int vis[V+1],top;
    memset(vis,0,sizeof(vis));
    vis[s]=1;
    parent[s]=-1;
    while(!que.empty())
    {
        top = que.front();
       // printf("%d ",top);
        que.pop();
        for(i=0;i<V;i++)
        {
            if(vis[i]==0 && rGraph[i][top]==1)
            {
                que.push(i);
                parent[i]=top;
                vis[i]=1;
            }
        }
    }
    if(vis[t])
        return 1;
    return 0;
}
main()
{
    int i,j;
    int E,x,y,s,t;
    cin>>V>>E;
    int adj[V+1][V+1];
    memset(adj,0,sizeof(adj));
    for(i=0;i<E;i++)
    {
        cin>>x>>y;
        adj[x][y]=adj[y][x]=1;
    }

    cin>>s;
    cin>>t;


return 0;
}

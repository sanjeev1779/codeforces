#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<queue>
#define LL long long
using namespace std;

typedef struct pong
{
    LL a,b;
}ping;

main()
{
    LL n,x,y,j,i;
    ping arr[102];
    int q;
    int adj[102][102];
    for(i=0;i<102;i++)
    {
        for(j=0;j<102;j++)
        {
            adj[i][j]=0;
        }
    }
    cin>>n;
    LL temp;
    while(n--)
    {
        LL p=1;
        j=0;
        cin>>q>>x>>y;
        x--;
        y--;
        if(q==1)
        {
            arr[j].a= x;
            arr[j].b=y;

            for(i=0;i<j;i++)
            {
                if( arr[j].a> arr[i].a && arr[j].a< arr[i].b || arr[j].b>arr[i].a && arr[j].b<arr[i].b)
                    adj[j][i]=1;
                if( arr[i].a> arr[j].a && arr[i].a< arr[j].b || arr[i].b>arr[j].a && arr[i].b<arr[j].b)
                    adj[i][j]=1;

            }
             j++;
        }
        else
        {
            //bfs for connection from x to y;
            int vis[102]={0};
            queue<int> q;
            q.push(x);
            p=1;
            while(!q.empty())
            {
                temp=q.front();
                q.pop();
                vis[temp]=1;
                for(i=0;i<j;i++) // j is the size of the array
                {
                    if(adj[temp][i]==1 && vis[i]==0)
                    {
                        q.push(i);
                        vis[i]=1;
                    }
                }
                if(vis[y]==1)
                {
                    p=0;
                    break;
                }
            }

                    if(p==1)
                        printf("NO\n");
                    else
                        printf("YES\n");

            }
        }


return 0;
}

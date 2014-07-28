#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#define LL long long
using namespace std;
main()
{
    int n,m,i,j;
    cin>>n>>m;
    int x=1;
    int y=1;
    int a[10005];
    int b[10005];
    int vis1[101]={0};
    int vis2[101]={0};
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            //printf("%d %d\n",i,j);
/*
            if(vis1[i]==0)
            {
                a[x]=i;
                vis1[i]=1;
                x++;
            }

            if(vis2[j]==0)
            {
                b[y]=j;
                vis2[j]=1;
                 y++;
            }*/
            if(vis1[i]==0 || vis2[j]==0)
            {
                    a[x]=i;
                    b[x]=j;
                    vis1[i]=1;
                    vis2[j]=1;
                     x++;
            }


        }
    }
    cout<<(x-1)<<endl;
    for(i=1;i<x;i++)
    {
        printf("%d %d\n",a[i],b[i]);
    }
return 0;
}

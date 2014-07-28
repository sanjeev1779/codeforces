#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#include<stack>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define pb push_back
#define clear(a,i) memset(a,i,sizeof(a))
using namespace std;
main()
{
    int n,m,i,j,top;
    S(n);
    S(m);
    stack<int>st;
    int edge[100][100];
    clear(edge,0);
    int vis[101];
    clear(vis,0);
    while(m--)
    {
        S(i);
        S(j);
        edge[i][j]=1;
        edge[j][i]=1;
    }
    st.push(1);
    vis[1]=1;
    while(!st.empty())
    {
        int k= st.top();
        st.pop();
        cout<<k<<" ";
        for(i=n;i>=1;i--)
        {
            if(edge[k][i]==1 && vis[i]==0)
            {
                st.push(i);
                vis[i]=1;
            }
        }
    }
    cout<<endl;

return 0;
}

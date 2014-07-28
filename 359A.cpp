#include<iostream>
#include<vector>
#include<string.h>
#include<stdio.h>
#include<map>
#include<math.h>
#include<algorithm>
#define LL long long
#define P(N) printf("%d\n",N);
#define S(N) scanf("%d",&N);
#define SL(N) scanf("%d",&N);
#define pb push_back
#define mp make_pair
using namespace std;
main()
{
      //  freopen("C:\\Users\\cyber\\Desktop\\codechef\\input.txt", "r", stdin);
       // freopen("C:\\Users\\cyber\\Desktop\\codechef\\output.txt", "w", stdout);
        int n,m,i,j,x;
        cin>>n>>m;
        int ans=0,flag=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>x;
                if(x==1)
                {
                    if(i==1 || i==n || j==1 || j==m)
                    {
                        ans=2;
                        flag=1;
                    }
                }
            }
        }
        if(flag==1)
            cout<<"2\n";
        else cout<<"4\n";

return 0;
}
